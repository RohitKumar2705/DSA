#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int main(){

vector<int>v = {7,8,9,1,2};
int max1 = INT_MIN;
int max2 = INT_MIN;
  for(int x: v)
  if(x>max1){
    max2 = max1;
    max1 = x;

  }
  else if(x>max2 &&  x != max1){
    max2 = x;
  }
   if(max2==INT_MIN) cout<<"No second largest\n"; else cout<<max2<<"\n";
  return 0;
}