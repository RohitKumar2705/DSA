#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
          if(arr[j+1]>arr[i] && arr[i]>arr[j+1]){
            return j+1;

          }
          else{
            return i;
          }
             
            }
        }
    }

    return 0;
}