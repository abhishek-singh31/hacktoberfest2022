#include<bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int knapsack(int wt[], int val[], int W,int n){
   
}
int main(){
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    int wt[n];
    for(int i=0;i<n;i++){
        cin>>wt[i];
    }
    int val[n];
    for(int i=0;i<n;i++){
        cin>>val[i];
    }
    int W;
    cin>>W;
    cout<<knapsack(wt,val,W,n);
    return 0;
}
