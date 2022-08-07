#include <bits/stdc++.h>
using namespace std;

int main(){
   //intializing array values in vector :)
   int arr[]={1,22,335,43,5,66,7};
   int n=sizeof(arr)/sizeof(arr[0]);
   vector<int> vec(arr,arr+n);
   
   sort(vec.begin(),vec.end());
   cout << "\nVector after sorting is: ";
   for (int i=0; i<n; i++)
       cout << vec[i] << " ";
	return 0;
}
