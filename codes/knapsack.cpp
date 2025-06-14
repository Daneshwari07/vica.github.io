#include<bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    int memo(int i,int W,int weight[],int value[],vector<vector<int>> &dp)
{
	if(i==0){
		if(weight[0] <= W) return value[0];
		return 0;
	}

	if(dp[i][W]!=-1) return dp[i][W];

	int notTake=0+memo(i-1,W,weight,value,dp);
	int take=INT_MIN;
        if (W >= weight[i]) {
           take =value[i] + memo(i - 1, W - weight[i], weight, value,dp);
        }
        return dp[i][W]=max(take, notTake);
}
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        vector<vector<int>> dp(n,vector<int>(W+1,-1));
	return memo(n-1,W,wt,val,dp);
    }
};



int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
