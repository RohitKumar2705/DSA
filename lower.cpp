#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int lowerbound(vector<int>arr,int n,int k){
    int low = 0,high = n-1;
    int ans = n;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>=k){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = { 2,3,6,4,7,9,8};
     sort(arr.begin(), arr.end());

    int k = 5;
    int index = lowerbound(arr, arr.size(), k);

    if (index != arr.size())
        cout << "Lower bound of " << k << " is at index: " 
             << index << " (value = " << arr[index] << ")" << endl;
    else
        cout << "No element greater than or equal to " << k << endl;
}