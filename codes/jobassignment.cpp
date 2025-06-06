#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int n;
vector<vector<int>> cost;
vector<int> dp;

int solve(int person, int mask) {
    if (person == n) return 0;
    if (dp[mask] != -1) return dp[mask];

    int minCost = INT_MAX;
    for (int job = 0; job < n; ++job) {
        if ((mask & (1 << job)) == 0) { 
            int newMask = mask | (1 << job); // assign job
            int currCost = cost[person][job] + solve(person + 1, newMask);
            minCost = min(minCost, currCost);
        }
    }
   return dp[mask] = minCost;
}

int main() {
    cout<<"Enter number of persons/jobs: ";
    cin>>n;
    cost.assign(n, vector<int>(n));
    dp.assign(1 << n, -1);
    for (int i=0; i<n;++i)
        for (int j=0; j<n;++j)
            cin>>cost[i][j];

    int result=solve(0, 0);
    cout <<"Minimum assignment cost: " <<result<<endl;

    return 0;
}
