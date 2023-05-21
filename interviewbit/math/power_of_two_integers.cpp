int Solution::isPower(int A) {
    for(int a=2;a<A;a++){
        int p=log(A)/log(a);
        if(pow(p,a)==A)return 1;
    }
    return 0;
}
