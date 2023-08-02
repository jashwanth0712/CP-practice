//----------------------brute force-----------------------------------------
bool check_pallindrome(string A){
    int n= A.size()-1;
    for( int i=0;i<=n;i++){
        if(A[i]!=A[n-i])
            return false;
    }
    return true;
}
int Solution::solve(string A) {
    int count=0;
    int n=A.size();
    while(n>0){
        if(check_pallindrome(A.substr(0,n))){
            break;
        }
        else{
            count ++;
            n--;
        }
    }
    return count;
}
