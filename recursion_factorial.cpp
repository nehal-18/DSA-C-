#include<iostream>
#include<stdio.h>

using namespace std;
int fun(int n){
if(n==0){
    return 1;
}
else{
    return fun(n-1)*n;
}
};
int main(){
    int r,i;
    cout<<"enter the number:"<<endl;
    cin>>r;
    i=fun(r);
    cout<<"factorial:";
    printf("%d",i);
    return 0;
}