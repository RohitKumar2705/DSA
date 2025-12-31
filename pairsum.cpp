#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int main(){
    vector<int> a = {8,2,1,3,4};
    unordered_set<int> s;
    int k = 9;

    for(int x:a){
     if(s.find(k-x) != s.end()){
        cout<<"yes";
        return 0;


     }
     s.insert(x);

     
    }
    cout<<"no";
}