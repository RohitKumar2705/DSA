// #include<iostream>
// using namespace std;
// class node{

//     public:
//     int data;
//     node*next;
//     node(int value){
//         data = value;
//         next = NULL;
//           class list{
//             node*head;
//             node*tail;
//             public:
//             list(){
//                 head = tail = NULL;
//             }
//             void push_front(int value){
//                 node*newnode = new node(value);
//                 if(head == NULL){
//                     head = tail = newnode;
//                     return ;

//                 }
//                 else{
//                     newnode->next = head;
//                     head = newnode;
//                 }
//             }
//           }
//     }
// };
// void printll(){
//     node*temp = head;
//     while(temp!= NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     cout<<"NULL"<<endl;

// }
// int main(){
//     list ll;
//     ll.push_front(1);
//     ll.push_front(2);
//     ll.push_front(5);
//     ll.printll();

//     return 0;
// }





#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node(int value) {
        data = value;
        next = NULL;
    }
};

class list {
    node* head;
    node* tail;
public:
    list() {
        head = tail = NULL;
    }

    void push_front(int value) {
        node* newnode = new node(value);
        if (head == NULL) {
            head = tail = newnode;
        } else {
            newnode->next = head;
            head = newnode;
        }
    }

    void printll() {
        node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    list ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(5);
    ll.printll();

    return 0;
}
