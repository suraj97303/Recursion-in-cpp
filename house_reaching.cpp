#include<iostream>
using namespace std;
void reachHouse(int source, int destination){
    cout<<"source"<<source<<":"<<"destination"<<destination<<endl;
    if(source==destination){
        cout<<"ohh ! bhai ghar pahuch gaya";
        return ;
    }

    source++;
    reachHouse(source,destination);
}
int main(){
    int source = 1;
    int destination = 10;
    reachHouse(source,destination);
    return 0;
}