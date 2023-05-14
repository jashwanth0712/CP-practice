//https://www.interviewbit.com/problems/occurence-of-each-number/
/*
solution 

*/
#include<iostream>
#include<map>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
int main(){
    std::map<int,int> hash_map;
    vector<int> a;
    a.push_back(4);
    a.push_back(3);
    a.push_back(3);
    for(int i=0;i<a.size();i++){
        auto iterator = hash_map.find(a[i]);
        if(iterator == hash_map.end()){
            cout<<a[i]<<" is not there \n";
            hash_map[a[i]]=1;
        }
        else{
            cout<<a[i]<<" occured"<<hash_map[a[i]]+1 <<" times\n";
            hash_map[a[i]]=hash_map[a[i]]+1;
        }
    }
    ///sorting vector 
     sort(a.begin(), a.end());
     vector<int> ans;
     for (int i=0;i<a.size();i++){
          auto iterator = hash_map.find(a[i]);
        if(iterator != hash_map.end()){
            ans.push_back(hash_map[a[i]]);
             hash_map.erase(a[i]);
         cout<<ans[i]<<" ,";
        }
     }
     
    return 0;
}