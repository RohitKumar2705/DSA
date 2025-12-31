#include<iostream>
using namespace std;

int linsearch(int arr[] , int target,int size){
    for(int i=0; i<size ;i++){
        if(arr[i] ==target){
            return i;
        }

    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = 6;
   int target = 5;
   cout<<linsearch(arr,target,size);

    return 0;
}