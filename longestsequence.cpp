// #include<iostream>
// #include<vector>
// #include<unordered_set>
// using namespace std;

// int longestsequence(vector<int> &a){
//     unordered_set<int> s(a.begin(),a.end());
//     int best = 0;
     
//     for(int num : s){
//         if(!s.count(num-1)){
//             int curr = num , length = 1;
//             while(s.count(num+1)){
//                 curr++;
//                 length++;

//             }
//             best = max(best, length);
//         }

//     }
//     return best;

// }

//  int main(){
//     // vector<int>a = {1,2,3,100,200,40};
//     // cout<<"longestconsecutive sequence "<<longestsequence(a) ;
    
//      vector<int> a = {100,4,200,1,3,2};
//     cout << "Longest consecutive length: " << longestsequence(a) << "\n"; // 4
//     return 0;
//  }

#include <bits/stdc++.h>
using namespace std;

// O(n) average time, O(n) space
int longestConsecutive(vector<int>& a){
    unordered_set<int> s(a.begin(), a.end());
    int best = 0;
    for(int num : s){
        if(!s.count(num-1)){ // start of a sequence
            int cur = num, length = 1;
            while(s.count(cur+1)){ cur++; length++; }
            best = max(best, length);
        }
    }
    return best;
}

int main(){
    vector<int> a = {100,4,200,1,3,2};
    cout << "Longest consecutive length: " << longestConsecutive(a) << "\n"; // 4
    return 0;
}
