#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n ;
        cin >> n;
        vector <int> a(n);
        for(int i=0;i<n;++i){
            cin >> a[i];
        }//input taken
        vector <int> b(n,0);
        for(int i=0;i<n;++i){
            b[i]= -a[i];
        }
        for(int i=0;i<n;++i){
            cout << b[i] <<" ";
        }
    }
    return 0;
}