#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        int len=nums.size();
        k%=len;
        if(k==0)
            return;
		// reversing first size-k element
        reverse(nums.begin(),nums.end()-k);
		
		// reversing last k element
        reverse(nums.end()-k,nums.end());
		
		//reversing the whole array
        reverse(nums.begin(),nums.end());
    }
};
int main(){
     vector<int> & nums;
    int k;
for(int i=0; i<nums.size(); i++)
{
    cin>>nums[i];
}          
  rotate(nums, k);
            
    return 0;
}