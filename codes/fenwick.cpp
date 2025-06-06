#include <bits/stdc++.h>
using namespace std;

// Method to calculate prefix sum till index idx
int sum(int idx, vector<int>& F)
{
    int runningSum = 0;
    // Summing up all the partial sums
    while (idx > 0) {
        runningSum += F[idx];
        int rightMostSetBit = (idx & (-idx));
        idx -= rightMostSetBit;
    }
    return runningSum;
}

// Method to update the array by adding X to index idx
void add(int idx, int X, vector<int>& F)
{
    while (idx < F.size()) {
        F[idx] += X;
        int rightMostSetBit = (idx & (-idx));
        idx += rightMostSetBit;
    }
}

// Method to calculate the prefix sum till ith index
int prefSum(int idx, vector<int> &F1, vector<int> &F2) {
    return sum(idx, F1) * idx - sum(idx, F2);
}

// Method to calculate sum of range [L, R]
int rangeQuery(int L, int R, vector<int>& F1, vector<int> &F2) {
    return prefSum(R, F1, F2) - prefSum(L - 1, F1, F2);
}

// Add X to all elements in range [l, r]
void rangeUpdate(int l, int r, int X, vector<int> &F1, vector<int> &F2) {
    add(l, X, F1);
    add(r + 1, -X, F1);
    add(l, X * (l - 1) , F2);
    add(r + 1, -(X * r), F2);
}

int main()
{
    int n = 5;

    // 1 - based indexing
    vector<int> arr{ -1e9, 1, 2, 3, 4, 5 };

    // Initially all the values of Fenwick trees are 0
    vector<int> F1(n + 1, 0), F2(n + 1, 0);

    // Build the fenwick tree
    for (int i = 1; i <= n; i++) {
        rangeUpdate(i, i, arr[i], F1, F2);
    }

    // Sum of elements from index 2 to 4
    cout << rangeQuery(2, 4, F1, F2) << "\n";
    // Sum of elements from index 1 to 5
    cout << rangeQuery(1, 5, F1, F2) << "\n";

    // Add X to all the elements from 2 to 4
    int l = 2, r = 4;
    int X = 7;

    rangeUpdate(l, r, X, F1, F2);

    // Sum of elements from index 2 to 4
    cout << rangeQuery(2, 4, F1, F2) << "\n";
    // Sum of elements from index 1 to 5
    cout << rangeQuery(1, 5, F1, F2) << "\n";

    return 0;
}
