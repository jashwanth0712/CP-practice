void print_dp(vector<int> dp){
    cout<<endl;
    for(int i=0;i<dp.size();i++){
        cout<<" "<<dp[i];
    }
    cout<<endl;
}
class Solution{
  public:
    int cutRod(int price[], int n) {
        vector<int> dp(n,0);
        // print_dp(dp);
        
        for(int i=0;i<n;i++){
            dp[i]=price[i];
            // cout<<i<<endl;
            for(int j=0;j<=i;j++){
                if(i!=j){
                    dp[i]=max(dp[i],dp[j]+dp[i-j-1]);
                    // cout<<"   "<<j<<i-j<<endl;
                }
            }
            // print_dp(dp);
        }
        return dp[n-1];
    }
};
