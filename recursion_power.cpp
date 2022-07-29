#include<iostream>
#include<stdio.h>

using namespace std;

int pow(int m,int n){
    if(n==0){
        return 1;
    }
    else{
        return pow(m,n-1)*m;
    }
}
//more efficienr method then first:)
int pow1(int m,int n){
    if(n==0){
        return 1;
    }
    if(n%2==0){
        return pow(m*m,n/2);
    }
    return m*pow(m*m,(n-1)/2);
};
int main(){
    int r1=pow(2,9);
    printf("%d",r1);
    cout<<endl;
    int r2=pow1(2,9);
    printf("%d",r2);
    return 0;
}