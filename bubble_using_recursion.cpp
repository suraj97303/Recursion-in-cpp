#include<iostream>
using namespace std;
void sort(int *arr, int n){
// base case
if(n==0 || n==1){
    return;
}
        // 1 case solve karlia ye aapka largest element ko end mai pahucha dega
        // n-1 tak isliye kyu ki arr[i+1] ha woh warna woh array se bahar chala jayegga
        for(int i=0; i<n-1; i++){
            if(arr[i] >arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
        // n-1 isliye kyu ki pehle case toh humne kar diya baki tu dekh le recursion
        sort(arr,n-1);

}
 int main(){
    int arr[5] = {2,5,1,6,9};
    sort(arr,5);
    for(int i=0; i<5 ; i++){
        cout<<"sorted array are"<<" "<<arr[i]<<endl;
    }
    return 0;
 }