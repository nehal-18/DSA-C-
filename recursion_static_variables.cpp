#include <stdio.h>
#include <stdlib.h>

using namespace std;

int function(int n){
    static int x=0;
     if(n>0){
        x++;
        return function(n-1)+x;
     }
     return 0;
}

int main(){

    int a;
    a=function(5);
    printf("%d",a);
    return 0;
}