#include<bits/stdc++.h>
using namespace std;
int dp[105][100005];
bool subsetSum(int arr[],int sum,int n){
    
}
int main(){
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum;
    cin>>sum;
    if(subsetSum(arr,sum,n)){
        cout<<"Subset Present\n";
    }
    else{
        cout<<"Subset Not Present\n";
    }
    return 0;
}
