#include<iostream>
using namespace std;

class Node{
    public:
      int value;
      Node*next;
      Node(int data){
        value = data;
         next = NULL;
      }
      
};
int main(){
    Node*n = new Node(1);
     Node*n = new Node(2);
    cout<<n->value<<" "<<n->next<<endl;
    cout<<n->value<<" "<<n->next<<endl;
    return 0;
}
// advantage of linked list is deletion and insrtion is very easy  chnage the memory on run time
//  no shift needde in linked list  no memory wasteage in the linked list  its is linear data structure it has many node 
// evevry node has a data and each node have  a address of next node
// 