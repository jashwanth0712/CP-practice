#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
   string A=">>><<<";
   int salutes=0;
   int count_right=0;
   for(auto it : A){
       if(it=='<'){
           salutes+=count_right;
       }
       else{
           count_right++;
       }
   }
   return salutes;
}
