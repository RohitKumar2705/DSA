#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int main(){
    // vector<int> a = {1,2,3,4,2,1};
    // unordered_set<int> s;

    // for(int i =  a.size()-1;i>=0;i--){
    //     if(s.find(a[i]) != s.end()){
    //         cout<<"first repeating element."<<a[i]<<endl;
    //     }
    //     return 0;
        
    //         s.insert(a[i]);
       
       
    // }
    //      cout<<"no repeating element"<<endl;


     vector<int> a = {1,2,3,4,2,1};
    unordered_set<int> s;

    for(int i = a.size()-1; i >= 0; i--){
        if(s.find(a[i]) != s.end()){
            cout << "First Repeating: " << a[i];
            return 0;
        }
        s.insert(a[i]);
    }
    cout << "No repeating element";
}

 
