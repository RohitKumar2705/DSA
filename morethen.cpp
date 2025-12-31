#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;



int main(){
    vector<int> a = {2,2,2,2,1,1,3,3,3,3};
    unordered_map<int,int> freq;
    int n = a.size();
    for(int x: a)freq[x]++;

    for(auto p:freq){
        if(p.second>n/3){
            cout<<p.first<<" ";
                }
    }


    
    return 0;

}