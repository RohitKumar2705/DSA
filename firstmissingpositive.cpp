// #include<iostream>
// #include<vector>
// using namespace std;

// int firstmissingpositive(vector<int> &a){
//     int n = a.size();
//     for(int i = 0;i<n;i++){
//         while(a[i] > 0 && a[i]<=n && a[a[i]-1] != a[i]){
//             swap(a[i],a[a[i]-1]);
//         }

//     }
//     for(int i =0 ;i<n;i++){
//         if(a[i] != i+1) return i+1;
//         return n+1;
//         }
//     }


// int main(){
//     vector<int>a = {3,4,-1,1};
//     cout<<"firstmissingpositive"<<firstmissingpositive(a) ;
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

// O(n) time, O(1) extra space (modifies array)
int firstMissingPositive(vector<int>& a){
    int n = a.size();
    for(int i=0;i<n;i++){
        while(a[i] > 0 && a[i] <= n && a[a[i]-1] != a[i])
            swap(a[i], a[a[i]-1]);
    }
    for(int i=0;i<n;i++)
        if(a[i] != i+1) return i+1;
    return n+1;
}

int main(){
    vector<int> a = {3,4,-1,1};
    cout << "First missing positive: " << firstMissingPositive(a) << "\n"; // 2
    return 0;
}
