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

void Inserttail(LinkedList* &tail,int d){
   LinkedList*q=new LinkedList(d);
   tail->next=q;
   tail=tail->next;
}

int main() {
 
	LinkedList*head=new LinkedList(10);
	LinkedList*tail=head;
	
   Insertfront(head,20);
   Inserttail(tail,30);
   Inserttail(tail,40);
   Insertfront(head,5);
	PrintList(head);
	
	return 0;
}
