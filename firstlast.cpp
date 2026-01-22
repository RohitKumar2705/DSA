// #include<iostream>
// #include<vector>
// using namespace std;

// int firstoccurance(vector<int>&arr,int n, int k){
//     int low = 0, high = n-1;
//     int first = -1;
//     while(low<=high){
//         int mid = (low+mid)/2;
//         if(arr[mid] == k){
//             first = mid;
//             high = mid-1;
//         }
//         else if(arr[mid]<k) low = mid+1;
//         else high = mid-1;

//     }
//     return first;
// }

// int lastoccurance(vector<int>&arr,int n,int k){
//       int low = 0, high = n-1;
//       int last = -1;
//       while(low<=high){
//         int mid = (low+high)/2;
//         if(arr[mid] == k ){
//             last = mid;
//             low = mid+1;

//         }
//         else if(arr[mid]<k) low = mid+1;
//           else high = mid-1;
//       }
//       return last;

// }

// pair<int,int> firstAndlastposition(vector<int>&arr,int n,int k){
//     int first = firstoccurance(arr,n,k);
//     if(first == -1) return{-1,-1};
//     int last = lastoccurance(arr,n,k);
//     return{first,last};
// }

// int main(){
//     vector<int> arr = {1, 2, 2, 2, 3, 4, 5};
//     int n = arr.size();
//     int k = 2;

//     pair<int,int> pos = firstAndLastPosition(arr, n, k);
//     cout << "First Occurrence of " << k << ": " << pos.first << endl;
//     cout << "Last Occurrence of " << k << ": " << pos.second << endl;

//     return 0;
// }



#include<iostream>
#include<vector>
using namespace std;

int firstOccurence(vector<int>& arr, int n, int k) {
    int low = 0, high = n - 1;
    int first = -1;
    while (low <= high) {
        int mid = (low + high) / 2;  // fixed bug
        if (arr[mid] == k) {
            first = mid;
            high = mid - 1; // keep searching on left side
        }
        else if (arr[mid] < k) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return first;
}

int lastOccurence(vector<int>& arr, int n, int k) {
    int low = 0, high = n - 1;
    int last = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == k) {
            last = mid;
            low = mid + 1; // keep searching on right side
        }
        else if (arr[mid] < k) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return last;
}

pair<int,int> firstAndLastPosition(vector<int>& arr, int n, int k) {
    int first = firstOccurence(arr, n, k);
    if (first == -1) return { -1, -1 };
    int last = lastOccurence(arr, n, k);
    return { first, last };
}

int main() {
    vector<int> arr = {1, 2, 2, 2, 3, 4, 5};
    int n = arr.size();
    int k = 2;

    pair<int,int> pos = firstAndLastPosition(arr, n, k);
    cout << "First Occurrence of " << k << ": " << pos.first << endl;
    cout << "Last Occurrence of " << k << ": " << pos.second << endl;

    return 0;
}
