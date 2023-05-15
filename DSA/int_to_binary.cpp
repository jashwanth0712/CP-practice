
#include <iostream>

using namespace std;

int get_binary(int n){
    int result=0;
    int digit=1;
    while(n>0){
        cout<<"\n n:"<<n<<" digit :"<<digit<<" n%2 is :"<<n%2;
        result= (n%2)*digit;
        digit*=10;
        n=n/2;
    }
    return result;
}


/*

*/

int main()
{
   get_binary(6);

    return 0;
}
