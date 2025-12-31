#include<iostream>
#include<vector>
using namespace std;

int majorityelement(vector<int> &a){
    int count = 0 , candidate = -1;
    for(int x:a){
        if(count == 0){
            candidate = x;
            count = 1;
        }
        else if(x == candidate){
            count++;
        }
        else{
            count--;
        }
    }
     return candidate;
} 

 int main(){
    vector<int> a = {2,2,2,2,1,1,1,3,3,3,3,3,3};
    cout<<majorityelement(a)<<" ";
    return 0;
 }