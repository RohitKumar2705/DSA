#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>&nums,int target){
    int n = nums.size();
    int low = 0,high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid]==target) return mid;
        else if(target>nums[mid]) low = mid-1;
        else high = mid-1;
    }
    return -1;

}

int main(){
    vector<int> arr = {1, 3, 5, 7, 9, 11};
    int target = 7;
    int index = search(arr, target);

    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found!" << endl;

    return 0;
}