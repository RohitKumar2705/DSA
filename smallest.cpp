// #include<iostream>
// #include<climits>
// using namespace std;

// int main(){

//     int marks[]= {10,9,13,4,6};
//     int size = 5;
//     int smallest = INT_MAX;
//     for(int i= 0;i<size;i++){
//         if(marks[i]<smallest){
//              smallest  = marks[i]  ;
//         }
//     }
//     cout<< smallest<<endl;
//     return 0;
    
// }


#include<iostream>
#include<climits>
using namespace std;

int main(){

    int marks[]= {10,9,13,4,6};
    int size = 5;
    int LARGEST = INT_MIN;
    for(int i= 0;i<size;i++){
        if(marks[i]>LARGEST){
             LARGEST  = marks[i]  ;
        }
    }
    cout<< LARGEST<<endl;
    return 0;
    
}