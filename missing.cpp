#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,5};
    int n = 5;
    int total = n * (n + 1) / 2;
    int sum = 0;

    for(int x: arr)
    sum +=x;
    cout<<"missing = "<<total-sum<<" ";


    return 0;
}