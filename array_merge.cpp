#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

struct Array{
int a[10];
int length;
int size;
}; 

struct Array* merge(struct Array *obj1,struct Array *obj2){
   int i,j,k;
   i=j=k=0;
   struct Array*p=(struct Array*)malloc(sizeof(struct Array));
   while(i<obj1->length && j<obj2->length){
      if(obj1->a[i]<obj2->a[j])
          p->a[k++]=obj1->a[i++];
      else
          p->a[k++]=obj2->a[j++];
   } 
   for(;i<obj1->length;i++){
      p->a[k++]=obj1->a[i];
   }
   for(;j<obj2->length;j++){
      p->a[k++]=obj2->a[j];
   }
   p->length=obj1->length+obj2->length;
   p->size=10;
   
   return p;
}

void display(struct Array p){
   for(int i=0;i<p.length;i++){
      cout<<p.a[i]<<"\n";
   }
}


int main(){
   
   struct Array obj1={{1,3,5,7,9},5,10};
   struct Array obj2={{2,4,6,8,10},5,10};
   struct Array *p;
   p=merge(&obj1,&obj2);
	//call to print
	display(*p);
	return 0;
}
