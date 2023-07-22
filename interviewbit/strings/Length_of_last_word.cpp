int Solution::lengthOfLastWord(const string A) {
    int ans=0;
    if(A.size()==0)return 0;
    int count=0;
    for(int i=A.size()-1;i>=0;i--){
        if(count==0 && A[i]==' ')continue;
        else if(A[i]==' ' && count>0)return count;
        else if(A[i]!=' ')count++;
        
    }
    return count;
}
