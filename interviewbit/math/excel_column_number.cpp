int Solution::titleToNumber(string A) {
    int ans=0;
    int p=0;
    for (int i=A.length()-1;i>=0;i--){
        ans+=pow(26,p)*(int(A[i])-int('A')+1);
        p++;
    }
    return ans;
}
