#include<iostream>
using namespace std;
int factorial(int num){
    
//     if(num==0){
// return 1;
//     }
    // int smallProblem = factorial(num-1);
    // int bigProblem = num*smallProblem;
    return num*factorial(num-1);
}
int main(){
    int num;
    cin>>num;
    int ans= factorial(num);
    cout<<ans;
    return 0;
}