#include<stdio.h>
using namespace std;

void toh(int n,int A,int B,int C){
        if(n>0){
         toh(n-1,A,C,B);
         printf("%d,%d",A,C);
         toh(n-1,B,A,C);
        }
}
int main(){
    toh(5,1,2,3);
    return 0;
}
