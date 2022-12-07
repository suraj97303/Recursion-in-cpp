// #include<iostream>
// using namespace std;
// // baiscally pointer hota ha array
// bool isSorted(int *arr , int size){

// // base case
// if(size==0 || size==1){
//     return true;
// }

// if(arr[0]>arr[1]){
//     return false;
// }
//  else{
//     // here arr+1 because we have checked the first array index above and size-1 as we are not going to consider the first index so size willbe -1.
//     bool remainingPart = isSorted(arr+1, size-1);
//     return remainingPart;
//  }
 
// }

//  int main(){
//     int arr[10]={2,4,6,8,9};
//     int size = 10;
//      bool ans = isSorted(arr, size);
//      if(ans){
//         cout<<"array is sorted";
//      }
//      else{
//         cout<<"array is unsorted";
//      }
//     return 0;
//  }

#include<iostream>
using namespace std;

bool isSorted(int arr[], int size) {

    //base case
    if(size == 0 || size == 1 ){
        return true;
    }

    if(arr[0] > arr[1])
        return false;
    else {
        bool remainingPart = isSorted(arr + 1, size - 1 );
        return remainingPart;
    }

}

int main() {

    int arr[5] = {2,4,9,9,9};
    int size = 5;

    bool ans = isSorted(arr, size);

    if(ans){
        cout << "Array is sorted " << endl;
    }
    else {
        cout << "Array is not sorted " << endl;
    }

    return 0;
}