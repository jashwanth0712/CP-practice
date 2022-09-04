#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        t--;
        int a,b;
        cin>>a>>b;

        if(a==0 && b!=0)
            cout<<"1";
        else if(b==0 && a!=0)
            cout<<a+1;
        else
            cout<<a+b*2+1;

    }
}
