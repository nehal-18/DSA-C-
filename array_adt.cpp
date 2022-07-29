#include <bits/stdc++.h>
using namespace std;
 
 struct Array{
    int *A;
    int size ;
    int length;
 };
 void display(struct Array arr){
    printf("\n elements are:\n");
    for(int i=0;i<arr.length;i++){
        printf("%d",&arr.A[i]);
    }
 }

int main(){
    struct Array arr;
    int i,n;
    cout<<"enter the size of array :"<<"\n";
    cin>>arr.size;
    arr.A=(int*)malloc(arr.size*sizeof(int));
    arr.length=0;
    cout<<"enter number of elements :";
    cin>>n;
    cout<<"enter all elements :";
    for(i=0;i<n;i++){
        cin>>arr.A[i];
    }
    arr.length=n;
    display(arr);
}