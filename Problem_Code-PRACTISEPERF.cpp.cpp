#include <iostream>
using namespace std;

int main() {
    int array[4],counter=0;
    for(int i=0;i<4;i++){
        cin>>array[i];
        if(array[i]>=10){
            counter++;
        }
    }
    cout<<counter;
	return 0;
}
