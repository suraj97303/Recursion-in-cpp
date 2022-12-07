#include<iostream>
#include<string.h>
using namespace std;
// here value are passed by reffrence.

  void reverseString(string& s, int i, int j){
   cout<<"call recevied for"<<" "<<s<<endl;
    // base case
    if(i>j){
        
return ;
    }

    swap(s[i],s[j]);
    i++; j--;
    // recursive call
 reverseString(s,i,j);

}
int main(){
    int i, j;
string name = "abcde";
cout<<endl;
 reverseString(name, 0 , name.length()-1);
cout<<name<<endl;
    return 0;
}