int Solution::solve(string A) {
    //lets maintain a stack
    stack<char> s;
    for(auto a: A){
        if(s.size()>0 && s.top()=='('&& a==')')
            s.pop();
        else
            s.push(a);
    }
    return s.size();
}
