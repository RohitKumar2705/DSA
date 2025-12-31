#include<bits/stdc++.h>
using namespace std;

int diffmaxandmin(vector<int> &arr, int k){
    sort(arr.begin(),arr.end());
    int n = arr.size();
    
    int smallsum = 0,largesum = 0;
    for(int i = 0; i<k;i++){
        smallsum += arr[i];
    }
    for(int i = n-k; i<n;i++){
        largesum += arr[i];
    }
    int ans = (largesum - smallsum );
}
 int main(){
    vector<int>arr = {5,2,2,4};
    // cout<<diffmaxandmin(arr, 2)<< ans <<" ";
    return 0;
 }