// Given an array A of size N. Rearrange the given array so that A[i] becomes A[A[i]] with O(1) extra space.
void Solution:: arrange(vector<int> &A) {
   int n=A.size();
   for(int i=0;i<n;i++){
       A[i]=A[i]+n*(A[A[i]]%n);
   }
   for(int i=0;i<n;i++){
       A[i]/=n;
   }
  
}
