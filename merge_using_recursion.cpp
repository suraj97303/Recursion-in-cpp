#include<iostream>
using namespace std;


void merge(int *arr, int s,int e){
int mid = (s+e)/2;
int len1 = mid - s + 1;
int len2 = e- mid;
int *first = new int[len1];
int *second = new int[len2];

// copy values
int k = s;
for(int i=0; i<len1; i++){
first[i]=arr[k++];
}

 k = mid+1;
for(int i=0; i<len2; i++){
    second[i]=arr[k++];
}

// merge 2 sorted array
// for first array
int index1 = 0;
// for second array
int index2 = 0;
// k jo ha woh darsha raha ha aapka main aarray index
k = s;

while(index1<len1 && index2<len2){
    // this case is if len1 and len2 are equal
if(first[index1]<second[index2]){
    arr[k++]=arr[index1++];
}
else{
    arr[k++]=arr[index2++];
}
}

// this case is if len1 and len2 are not equal
while(index1 < len1){
       arr[k++]=arr[index1++];
}
while(index2 < len2){
    arr[k++]=arr[index2++];
}

}
void mergeSort(int *arr, int s, int e)

{

// base case 
if(s>e){
    return ;

int mid = s+(e-s)/2;
// left part sort karna h
mergeSort(arr, 0, mid);

// right part sort karna h
mergeSort(arr, mid+1, e);


// merge kar do yar
merge(arr,s,e);
}



int main() 
{
    int arr[5] = {2,5,1,6,9};
    int n = 5;
    
    mergeSort(arr, 0,n-1);
    return 0;
}