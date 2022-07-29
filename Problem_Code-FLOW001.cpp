//The task is very simple: given two integers A and B, write a program 
//to add these two numbers and output it.
#include <bits/stdc++.h>
using namespace std;

int main() {
	int test_cases,A,B;
	cin>>test_cases;
	while(test_cases--){
	    int sum=0;
	    cin>>A>>B;
	    sum=A+B;
	    cout<<sum<<"\n";
	}
	return 0;
}
