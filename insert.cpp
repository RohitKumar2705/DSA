// #include<iostream>
// #include<stack>
// using namespace std;

// int main(){
//     void solve(stack<int> s, int x){
//         if (s.empty())
//         {
//          s.push(x);
//          return ;   
//         }
//         int num = s.top();
//         s.pop();
//         solve(s,x);
//         s.push(num);
        
//     }

//     return 0;
// }




#include <iostream>
#include <stack>

using namespace std;

void solve(stack<int> &s, int x) {
    if (s.empty()) {
        s.push(x);
        return;
    }
    
    int num = s.top();
    s.pop();
    
    solve(s, x);
    
    s.push(num);
}

int main() {
    stack<int> s;
    
    // Push some elements into the stack
    s.push(1);
    s.push(2);
    s.push(3);
    
    int x = 8; // Element to insert at the bottom
    solve(s, x);
    
    // Print stack contents after insertion
    cout << "Stack from top to bottom: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    
    return 0;
}
