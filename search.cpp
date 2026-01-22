#include<iostream>
#include<vector>
 #include<algorithm>
 using namespace std;

// int searchinsert(vector<int>&arr, int k){
//     int n = arr.size();
//     int low = 0, high  = n-1;
//     int ans = n;
//     while(low<=high){
//         int mid = (low+high)/2;
//         if(arr[mid]>=k){
//             ans = mid;
//             high = mid-1;

//         }
//         else{
//             low = mid+1;

//         }
//     }
//     return ans;
// }


int main(){
    vector<int>arr = {2,4,6,7,1,0};
    
    // sort before using binary search
    sort(arr.begin(), arr.end());

    // int k = 5;
    // int pos = searchinsert(arr, k);

     cout << "Sorted array: " ;
     for(auto x :arr){
        cout<<x;
     }
    // // for (int x : arr) cout << x << " ";
    // cout << endl;

    // cout << "Insert position of " << k << " is: " << pos << endl;
    return 0;
}