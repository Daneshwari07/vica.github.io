#include<iostream>
#include<string>
#include<vector>
#include<climits>
using namespace std;

int findSequence(string a,string b)
{
    int m=a.size();
    int n=b.size();
    vector<vector<int>>seq(m+1,vector<int>(n+1,0));
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(a[i-1]==b[j-1]){
                seq[i][j]=1+seq[i-1][j-1];
            }
            else{
                seq[i][j]=max(seq[i-1][j],seq[i][j-1]);
            }
        }
    }
    return seq[m][n];
   
}
int main()
{
    string a;
    string b;
    cin>>a;
    cin>>b;
    cout<<findSequence(a,b)<<endl;
}
