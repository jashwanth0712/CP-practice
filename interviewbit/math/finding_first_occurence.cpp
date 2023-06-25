#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> A = {5,7,7,7,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,10};
    int B=8;
    int start =0;
    int end = A.size()-1;
    int count=0;
    int key=-1;
    while (start<=end){
        
        int mid=(start+end)/2;
        cout << "start: " << start << ", mid: " << mid << ", end: " << end << ", key: " << key << endl;

        if(A[mid]<B){
            // our num is on the left side 
            start=mid+1;
        }
        else if(A[mid]>B){
            end=mid-1;
        }
        else{
            key=mid;
            end=mid-1;
            count+=1;
        }
        cout << "start: " << start << ", mid: " << mid << ", end: " << end << ", key: " << key << endl;

    }
    int index=(start+end)/2;
    cout<<key;
}
