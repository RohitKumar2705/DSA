#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    s.push(3);
    s.push(2);
    s.pop();
    cout<<"printing top element"<<s.top()<<endl;
    if(s.empty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"satck is not empty"<<endl;
    }
    return 0;
}
