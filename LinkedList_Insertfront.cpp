#include <iostream>
using namespace std;

class LinkedList{
   public:
     int data;
     LinkedList*next;
     LinkedList(int data){
        this->data=data;
        this->next=NULL;
     }
};

void PrintList(LinkedList*n){
   while(n!=NULL){
      cout<<n->data<<" ";
      n=n->next;
   }
}

void Insertfront(LinkedList* &head,int d){
   LinkedList*p=new LinkedList(d);
   p->next=head;
   head=p;
}


int main() {
 
	LinkedList*head=new LinkedList(10);
   Insertfront(head,20);
	PrintList(head);
	
	return 0;
}
