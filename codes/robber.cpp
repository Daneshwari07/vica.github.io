#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int rob(const vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return 0;           
    if (n == 1) return nums[0];     

    // dp[i] stores the max amount robbed from house 0 to house i
    vector<int> dp(n);
    dp[0] = nums[0];              
    dp[1] = max(nums[0], nums[1]); 
    for (int i = 2; i < n; ++i) {
        dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
    }

    return dp[n - 1]; // Max amount at the last house
}

int main() {
    vector<int> houses = {2, 7, 9, 3, 1};
    cout<<rob(houses) << endl;
    return 0;
}
