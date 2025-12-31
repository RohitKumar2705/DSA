#include<iostream>
using namespace std;

int binarytodec(int num){
    int ans = 0;
    int pow = 1;
    while(num>0){
        int rem = num%10;
        ans += rem*pow;

        num /= 10;
        pow *= 2;

    }
    return ans;

}


int main(){
    cout<<binarytodec(1001)<<endl;

    return 0;
}