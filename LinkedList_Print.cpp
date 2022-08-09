#include <iostream>
using namespace std;

class LinkedList{
   public:
     int data;
     LinkedList*next;
};

void PrintList(LinkedList*n){
   while(n!=NULL){
      cout<<n->data<<" ";
      n=n->next;
   }
}

int main() {
   //create three nodes head,first,second
	LinkedList*head=new LinkedList;
	LinkedList*first=new LinkedList;
	LinkedList*second=new LinkedList;
	
	//values given to nodes
	head->data=10;
	head->next=first;
	
	first->data=20;
	first->next=second;
	
	second->data=30;
	second->next=NULL;
	
	//printing values
	PrintList(head);
	
	return 0;
}
