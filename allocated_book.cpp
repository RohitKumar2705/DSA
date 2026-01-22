// #include<iostream>
// #include<vector>
// using namespace std;

// int countstudent(vector<int> &arr,int pages){
//     int student = 1;
//     long long pagestudent = 0;
//     for(int i= 0; i<arr.size();i++){
//         if(pagestudent + arr[i] <= pages){
//             pagestudent += arr[i];

//         }
//         else{
//             student += 1;
//             pagestudent = arr[i];

//         }
//     }
//     return student;
// }

// int findpages(vector<int> &arr,int m, int n){
//    if(m>n) return -1;
//    int low = *max_element(arr.begin(),arr.end());
//    int high = accumulate(arr.begin(),arr.end(),0);
//    while(low<=high){
//     int mid = (low+high)/2;
//     int student = countstudent(arr,mid);
//     if(student>m){
//         low = mid+1;

//     }
//     else{
//         high = mid-1;

//    }
// }
// return low;
// }




#include <iostream>
#include <vector>
#include <numeric>   // for accumulate
#include <algorithm> // for max_element
using namespace std;

int countStudents(vector<int> &arr, int pages) {
    int students = 1;       // start with first student
    long long pageSum = 0;  

    for (int i = 0; i < arr.size(); i++) {
        if (pageSum + arr[i] <= pages) {
            pageSum += arr[i];   // assign book to current student
        } else {
            students++;          // allocate new student
            pageSum = arr[i];    // start count for new student
        }
    }
    return students;
}

int findPages(vector<int> &arr, int m) {
    int n = arr.size();
    if (m > n) return -1; // Not possible if students > books

    int low = *max_element(arr.begin(), arr.end()); // at least one book’s max pages
    int high = accumulate(arr.begin(), arr.end(), 0); // at most all pages to one student
    int result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        int students = countStudents(arr, mid);

        if (students > m) {
            // too few pages allowed → need more students
            low = mid + 1;
        } else {
            // feasible → try smaller max
            result = mid;
            high = mid - 1;
        }
    }
    return result;
}

int main() {
    vector<int> books = {12, 34, 67, 90};
    int m = 2; // number of students

    int ans = findPages(books, m);
    cout << "Minimum number of pages = " << ans << endl;

    return 0;
}
