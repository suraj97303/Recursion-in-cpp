// question is you are at 0th stair and u have to reach to nth stair cond is either u take step 1 or step 2
#include<iostream>
int countDistinctWayToClimbStair(long long nStairs){
    if(nStairs<0){
return 0;
    }
    if(nStairs==0){
        return 1;
    }
    // recursive call
    int ans = countDistinctWayToClimbStair(nStairs-1)+countDistinctWayToClimbStair(nStairs-2);
    return ans;
}
using namespace std;
int main(){
int nStairs;
cin>>nStairs;
int result = countDistinctWayToClimbStair(nStairs);
cout<<result;
    return 0;
}