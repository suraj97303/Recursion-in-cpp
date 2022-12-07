
// #include<iostream>
// using namespace std;
// int main(){
//     long a =3; 
//     long b = 50;
//     long long int ans = 1;
//     for(int i=0;i<b; i++){
//                 ans = ans*a;
//     }
//     cout<<ans<<endl;
//     return 0;
// }

// optimzed way is below



#include<iostream>
using namespace std;

int power(int a, int b){
    // base case 
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }

    // reccursion call
    int ans = power(a,b/2);

    // if b is even 
    if(b%2==0){
        return ans*ans;
    }

    // if b is odd
    else{
        return a*ans*ans;
    }


}


 int main(){
int a, b;
cin>>a>>b;

int ans = power(a,b);
cout<<"ans is :"<<ans<<endl;
    return 0;
 }