#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int CalSteps(int target,vector<int>& dp,int pos=0){
    for(int i=0;i<target;i++){
        cout<<dp[i]<<" ";
    }
    cout<<endl;

    if(pos>target)
        return 0;
    if(pos==target)
        return 1;
    if(dp[pos]!=-1)
        return dp[pos];
    dp[pos]=CalSteps(target,dp,pos+1)+ CalSteps(target,dp,pos+2);
    return dp[pos];
}
int CalStepsWithoutDp(int target,vector<int>& dp,int pos=0){
    for(int i=0;i<target;i++){
        cout<<dp[i]<<" ";
    }
    cout<<endl;

    if(pos>target)
        return 0;
    if(pos==target)
        return 1;

    return CalStepsWithoutDp(target,dp,pos+1)+ CalStepsWithoutDp(target,dp,pos+2);
}
int main(){
    int n;
    while(true){
        cin>>n;
        vector<int> dp(n+1,-1);
        cout<<CalSteps(n,dp,0)<<endl;
        cout<<"\n========================\n";
        vector<int> dp1(n+1,-1);

        cout<<CalStepsWithoutDp(n,dp1,0)<<endl;

    }
    return 0;
}
