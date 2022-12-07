#include<iostream>
using namespace std;
void  print(int n){

    // base case
     if(n==0){
        return ;
     }
    //  jaise hi line no 3 mai input aaya print kar do 
    // if u will change the place of line below to below recursive realtion u will see something new
// cout<<n<<endl;

// recursive relation
print(n-1);
cout<<n<<endl;
// print(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<endl;
    print(n);
    return 0;
}