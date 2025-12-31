// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main(){
//     int arr[] = {1,2,3,4,5};
//     int size = 5;
   
//   int largest = *max_element(arr, arr+size);
     
//         cout<<largest<<endl;

//     return 0;
// }


#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {14,12,15,23,9};
    int size = 5;
   
//   int largest = *max_element(arr, arr+size);
//   int minimum = *min_element(arr,arr+size);
  sort(arr,arr+size);
     for(int i=0;i<size;i++){
        cout<<arr[size]<<endl;
     }
        // cout<<largest<<endl;
        // cout<<minimum<<endl;

// cout<<sort<<endl;
    return 0;
}


// int minimum = *min_element(arr,arr+size);

// cout<<minimum<<endl;
// int sort = *sort_elemnt(arr,arr+size);

// cout<<sort<<endl;