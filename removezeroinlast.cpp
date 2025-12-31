#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {0,0,1,0,2,3,4};

    int j = 0;
    for(int i=0;i<v.size();i++){
        if(v[i] != 0){
            v[j] = v[i];
        
        j++;
    }
    }
    while(j<v.size()){
         v[j] = 0;
        j++;

    }
    for(int x:v)
    cout<< x<<" ";

    return 0;
}