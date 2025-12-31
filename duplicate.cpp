#include<iostream>
#include<set>

using namespace std;

int main(){
    int arr[] = {1,2,3,3,4 ,4,5};
    int n = 7;
    set<int>s;
    for(int i=0;i<n;i++){
    s.insert(arr[i]);
    // insert store the element in the array
    }
    cout<<"remove duplicate"<<endl;
    // int the int x it store the elment after the remove duplicate operation
    for(int x:s)
    cout<<"after the duplicate the element"<<x<<endl;
    return 0;

}