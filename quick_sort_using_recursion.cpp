#include<iostream>
using namespace std; 
//    ***********   SC O(N^2)  TC O(NLOGN)   ***********
int partition(int arr[], int s, int e){
    int pivot = arr[s];
    int cnt = 0;
    for(int i=s+1; i<=e; i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
// place where pivot index should be place
    int     pivotIndex  = s+cnt;
    swap(arr[pivotIndex],arr[s]);


    // left and right wala part sambhal lete h


    int i = s, j = e;
        //  i ko badhao pivotindex tk and j ko ghatao pivotindex tk
    while(i<pivotIndex && j> pivotIndex){
            while(arr[i]<pivot)
            {
                i++;
            }

            while(arr[j]>pivot){
                j--;
            }
            if(i<pivotIndex && j> pivotIndex){
                swap(arr[i++],arr[j--]);
            }
    }
    return pivotIndex;


}


 void quickSort(int arr[], int s, int e){
// base case 
// if arr is 0 || arr is 1 then too it is sorted 
if(s>=e){
    return ;
}
// partition
int pi = partition(arr, s, e);

// left part sort 
quickSort(arr, s, pi-1);
// right part sort
quickSort(arr, pi+1, e);

 }

int main(){
    int arr[5] = {2,4,1,6,9};
    int n =5 ;

quickSort(arr, 0, n-1);

for(int i=0; i<n ; i++)
{
    cout<<arr[i]<<" ";
}
    return 0;
}