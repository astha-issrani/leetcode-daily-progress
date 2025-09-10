#include <stack>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int marked=-1;
        int n=nums.size();
        for(int i=n-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                marked=i-1;
                break;
            }
        }
        int swap_idx=marked;
        if(marked!=-1){
            for(int j=n-1;j>marked;j--){
                if(nums[j]>nums[marked]){
                    swap_idx=j;
                    break;
                }
            }
            swap(nums[swap_idx],nums[marked]); 
        }
        
        reverse(nums.begin()+marked+1,nums.end());
    }
};