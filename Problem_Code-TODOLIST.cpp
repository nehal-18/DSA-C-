#include <iostream>
using namespace std;

int main(){
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int array[n],count=0;
	    for(int i=1;i<=n;i++)
		{
			cin>>array[i];
			if(array[i]>=1000){
				count++;}
				}
	    cout<<count<<endl;
	}
	return 0;
}
