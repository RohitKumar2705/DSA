#include<iostream>
using namespace std;

int dectobinary(int num){
    int ans = 0;
    int pow = 1;

    while(num>0){
        int rem = num%2;
        num /= 2;
        ans += (rem*pow);
        pow *= 10;



    }
    return ans;

}

int main(){
    //  int num = 50;
    //  cout<<dectobinary(num)<<endl;
    for(int i= 0;i<10;i++){
        cout<<dectobinary(i)<<endl;
    }

    return 0;
}
