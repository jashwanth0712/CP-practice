int Solution::pow(int x, int n, int d) {
    int ans=1;
    while(n>0){
        if(n%2==0){
            //even
            x*=x;
            n/=2;
        }
        else{
            ans*=x;
            n-=1;
        }
    }
    if(ans<0)
    return (ans%d +d)%d;
    return ans%d;
}
