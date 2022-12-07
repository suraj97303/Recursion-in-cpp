#include<iostream>
using namespace std; 
void sayDigit(int n, string arr[]){
    // base case 
    // this case means for eg 412 so if the no is empty like first four then 1 and then 2 and after that it will be empty so return then
    if(n==0){
        return ;
    }
    // processing or removing digit from 412
int digit = n % 10;
n= n/10;
cout<<arr[digit]<<" "<<endl<<endl;
// recursvie call;
sayDigit(n, arr);
cout<<arr[digit]<<" "<<endl;}
int main(){
    string arr[10]={"zero", "one", "two", "three"
                   , "four" , "five" ,"six", "eight",
                   "nine"};
    int n;
    cin>>n;
sayDigit(n, arr);
cout<<endl<<endl<<endl<<endl;
    return 0;
}