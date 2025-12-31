#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;


int main(){
    vector<int> a= {1,1,2,3,3,3,4,9};
    unordered_map<int,int> freq;
    for(int x:a) freq[x]++;

    for(int x:a){
        if(freq[x] == 1){
            cout<<x;
            break;
        }
    }

    return  0;
}