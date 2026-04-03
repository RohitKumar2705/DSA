// #include<iostream>
// #include<stack>
// using namespace std;
// void solve(stack<int>&inputstack,int count ,int size){
//     if(count == size/2){
//         inputstack.pop();
//         return ;
//     }
//     int num = inputstack.top();
//     inputstack.pop();
// }
  
// int main(){
//     stack<int> s;
//     s.push(1);
//     s.push(3);
//     s.push(4);
//     s.push(6);
//     s.push(7);
//     cout<<"stack from middle"<<endl;
//     return 0;
// }


#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int>& inputstack, int count, int size) {
    // Base case: If we have reached the middle element
    if (count == size / 2) {
        inputstack.pop();
        return;
    }

    // Store the top element and remove it
    int num = inputstack.top();
    inputstack.pop();

    // Recursive call
    solve(inputstack, count + 1, size);

    // Push back the stored element to maintain stack order
    inputstack.push(num);
}

void deleteMiddle(stack<int>& s) {
    int size = s.size();
    int count = 0;
    solve(s, count, size);
}

void printStack(stack<int> s) {
    stack<int> temp;
    
    // Reverse the stack for proper printing
    while (!s.empty()) {
        temp.push(s.top());
        s.pop();
    }

    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
}

int main() {
    stack<int> s;
    s.push(1);
    s.push(3);
    // s.push();
    s.push(6);
    s.push(7);

    cout << "Stack before deleting middle element:" << endl;
    printStack(s);

    deleteMiddle(s);

    cout << "Stack after deleting middle element:" << endl;
    printStack(s);

    return 0;
}
