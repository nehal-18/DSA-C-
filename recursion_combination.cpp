#include <iostream>
using namespace std;
//based on pascal triangle
int comb(int n,int r){
    if(r==0 || n==r){
        return 1;
    }
    else{
        return comb(n-1,r-1)+comb(n-1,r);
    }
}
int main() {
	int n,r;
	cin>>n>>r;
	int q=comb(n,r);
	cout<<q;
	return 0;
}
