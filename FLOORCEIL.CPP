// #include<iostream>
// #include<vector>
// using namespace std;

// int floor(vector<int>&arr,int n){
//      int ans = -1;
//      int low =0 ,high = n-1;
//      while(low<=high){
//         int mid = (low+high)/2;
//         if(arr[mid]<= mid){
//             ans = arr[mid];
//             low = mid + 1;

//         }
//         else{
//             high = mid+1;
//         }
//      }
// }
  


// int main(){
     
//     return 0;
// }



#include<iostream>
#include<vector>
using namespace std;

int floorSearch(vector<int>& arr, int n, int k) {
    int ans = -1;
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] <= k) {
            ans = arr[mid];   // possible floor
            low = mid + 1;    // move right to find closer floor
        } else {
            high = mid - 1;   // move left
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {1, 2, 4, 6, 8, 10};
    int k = 5;
    int n = arr.size();

    cout << "Floor of " << k << " is: " << floorSearch(arr, n, k) << endl;

    return 0;
}
