#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>&arr,int n,int k){
    int low =0,high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == k) return mid;
        if(arr[low]<= arr[mid]){
            if(arr[low]<= k && k<=arr[mid]){
                high = mid-1;
            } else{
                low = mid-1;
            }
        }
        else {
           if(arr[mid]<= k && k<=arr[high]){
            low = mid+1;

           }
           else{
            high= mid-1;
           }
    
        }
    }
    return -1;
}


int main(){
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int n = arr.size();
    int k = 0;

    int index = search(arr, n, k);
    if (index != -1)
        cout << "Element " << k << " found at index " << index << endl;
    else
        cout << "Element " << k << " not found" << endl;
    return 0;
}