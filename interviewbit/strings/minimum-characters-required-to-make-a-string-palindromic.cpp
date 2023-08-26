//----------------------brute force-----------------------------------------
bool check_pallindrome(string A){
    string normal=A;
    reverse(A.begin(), A.end());
    if(normal==A){
        // pallindome 
        return true;
    }
    else{
        return false;
    }
}
int Solution::solve(string a) {
    int i=0;
    int index=a.length()-1;
    while(index>=0){
        // cout<<endl<<a<<endl;
        if(check_pallindrome(a)==1){
            return i;
            break;
        }
        else{
            i++;
            a.erase(index,1);
            index--;
        }
    }
    return i;
}
