#include<iostream>
using namespace std;
//recursion method-horner rule
double expo(int x,int n){
    static double s;
   if(n==0){
    return s;
   }
    else{
        s=1+x*s/n;
        return expo(x,n-1);
}
}
//iterative method
double expo1(int x,int n){
    double s=1,num=1,den=1;
    for(int i=1;i<=n;i++){
        num*=x;
        den*=i;
        s+=num/den;
    }
    return s;

}
int main(){
    double r=expo(3,10);
    cout<<r<<endl;
    double t=expo1(3,10);
    cout<<t;
    return 0;
}