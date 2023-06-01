int Solution::highestScore(vector < vector < string > > & A) {
    map < string, pair < int, int >> mp;
    for (int i = 0; i < A.size(); i++) {
        if (mp.find(A[i][0]) == mp.end()) {
            mp[A[i][0]] = make_pair(0, 0);
        }
        mp[A[i][0]] = make_pair(mp[A[i][0]].first + stoi(A[i][1]), mp[A[i][0]].second + 1);
    }
    int ans = 0;
    for (auto & x: mp) {
        ans = max(ans, x.second.first / x.second.second);
    }
    return ans;
}
