#include<iostream>
using namespace std;

double expo(int x,int n){
    static double a=1,b=1;
   if(n==0){
    return 1;
   }
   else{
    double c=expo(x,n-1);
    a=a*x;
    b=b*n;
    return c+a/b;
   }
}
int main(){
    double r=expo(3,10);
    cout<<r;
    return 0;
}