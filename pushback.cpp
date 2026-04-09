#include<iostream>
using namespace std;
class node{
  int data;
  node*next;
  node(int value){
    data = value;
    next = NULL;
  }
  
    
};
class list{
    
    node*head;
    node*tail;
    public:
    list(){
        head = tail = NULL;


    }
    void push_front(int value){
        node*newnode = newnode(value);
        if(head== NULL){
            head = tail = newnode;
            return;
        }
        else{
            newnode->next = head;
            head = newnode;
        }

    }
        void push_back(int value){
            node*newnode = newnode(value);
            if(head == NULL){
              head = tail = newnode;
            }
            else{
                tail->next = newnode;
                tail = newnode;
            }
        }
};
int main(){
    list ll;
    
}