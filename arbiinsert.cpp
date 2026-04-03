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
    void  insertAThead(Node*&head,int value){
        Node*new_Node = new Node(value);
        new_Node->next = head;
        head = new_Node;
    }
     void insertATtail(Node*&head,int value){
        Node*new_Node = new Node(value);
        Node*temp = head;
        while(temp->next != NULL){
            temp = temp->next;


        }
        temp->next = new_Node;
     }
     void insertATposition(Node*&head,int value,int pos){
        if(pos==0){
            insertAThead(head,value);

            return ;
        }
        Node*new_Node = new Node(value);
        Node*temp = head;
        int current_pos = 0;
        while(current_pos!=pos-1){
            temp = temp->next;
            current_pos++;
        }
        new_Node->next = temp->next;
        temp->next = new_Node;
     }






    void display(Node*head){
        Node*temp = head;
        while(temp!=NULL){
            cout<<temp->value<<"->";
            temp = temp->next;

            
        }
        cout<<"NULL"<<endl;
    }


int main(){
   Node*head = NULL;
   insertAThead(head,2);
   display(head);
   insertAThead(head,1);
   display(head);
   insertATtail(head,3);
   display(head);
   insertATposition(head,4,1);
   display(head);
   
    return 0;
}