string Solution::serialize(vector<string> &A) {
      string sol="";
    for(auto it : A){
        sol.append(it);
        // appeding delimeter and length
        sol.append(to_string(it.size()));
        sol.append("~");
        
    }
    return sol;
}
