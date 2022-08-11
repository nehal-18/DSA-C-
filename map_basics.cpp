#include<iostream>
#include<map>
using namespace std;

int main(){
  map<int,int> mymap1;

  //.insert() 
  //keys are stored in ascending order 
  //with their respective values
  mymap1.insert( {1,2} );
  mymap1.insert( {3,3} );
  mymap1.insert( {4,6} );
  mymap1.insert( {5,8} );
  mymap1.insert( {2,3} );

  //'A'-65-ASCII Value will be inserted
  mymap1.insert( pair<int,int>('A',1) ); 

  //Creating iterator
  map<int,int>::iterator itr;
 
  for( itr = mymap1.begin(); itr !=mymap1.end(); itr++ ){
    cout<<itr->first<<"\t"<<itr->second<<"\n";
 }

 //It will not accept below cmd because
 // it already exits in map.
  mymap1.insert({3,2});
  cout<<"\n";

  //Test ->Can we can insert
  // key which is already present?
  pair<map<int,int>::iterator,bool> pr;
  pr = mymap1.insert ( pair<int,int>( 3,5 ) );
  if ( pr.second==false ) {
    cout << "Key 3 already existed ";
    cout << " with a value of " << pr.first->second << '\n';
  }  
   
  //.erase(iterator position)
  //Remove record with key=4
  mymap1.erase( 4 );
 
  //Remove record whose key<3
  mymap1.erase(mymap1.begin(),mymap1.find(3));
  cout<<"After erase :)"<<"\n";
  for( itr = mymap1.begin(); itr !=mymap1.end(); itr++ ){
    cout<<itr->first<<"\t"<<itr->second<<"\n";
 }

 //.size()
 int num=mymap1.size();
 cout<<"Size of Map After Erase : "<<num<<"\n";
  
  //.empty()
  //0-false,1-true
  bool val=mymap1.empty();
  cout<<"Is map empty?: "<<val<<"\n";

  //.clear
  //removing all elements from map
   mymap1.clear();

   bool val1=mymap1.empty();
   cout<<"Is map empty?: "<<val1<<"\n";

  return 0;
}