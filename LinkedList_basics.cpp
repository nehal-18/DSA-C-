#include <iostream>
using namespace std;

class LinkedList{
   public:
     int data;
     LinkedList*next;
};

int main() {
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
	
	return 0;
}
