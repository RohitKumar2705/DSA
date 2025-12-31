// #include<iostream>
// #include<vector>
// #include<unordered_map>
// #include<algorithm>
#include<bits/stdc++.h>
using namespace std;


long long countsubarraysumk(vector<int> &a,int k){
    unordered_map<long long ,int> cnt;
    cnt[0] = 1;
    long long pref = 0, ans = 0;

    for(int x :a){
    pref += x;
    if(cnt.count(pref-k))  ans += cnt[pref-k];
        ans += cnt[pref-k];
        cnt[pref]++;
    }
     return ans;
}

int main(){
    vector<int> a = {1,1,1};
    cout<<" countsubarraysumk"<<countsubarraysumk(a,2)<<"\n";
    
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// // O(n) time, O(n) space using prefix sums & hashmap
// long long countSubarraysSumK(vector<int>& a, int k){
//     unordered_map<long long,int> cnt;
//     cnt[0] = 1;
//     long long pref = 0, ans = 0;
//     for(int x : a){
//         pref += x;
//         if(cnt.count(pref - k)) ans += cnt[pref - k];
//         cnt[pref]++;
//     }
//     return ans;
// }

// int main(){
//     vector<int> a = {1,1,1};
//     cout << "Count subarrays sum=2: " << countSubarraysSumK(a,2) << "\n"; // 2
//     return 0;
// }
