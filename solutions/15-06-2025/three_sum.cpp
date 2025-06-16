#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:

    void two_sum(vector<int>& nums,int k,vector<vector<int>>& result,int target){
        int i =k;
        int j=nums.size()-1;
        while(i<j){
            if(nums[i]+nums[j]>target){
                j--;
            }
            else if(nums[i]+nums[j]<target){
                i++;
            }
            else{
                result.push_back({-target,nums[i],nums[j]});
                while(i<j && nums[i]==nums[i+1]){
                    i++;
                }
                while(i<j && nums[j]==nums[j-1]){
                    j--;
                }
                i++;
                j--;
            }
        }
    } 
    
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        if(n<3){
            return {};
        }
        vector<vector<int>> result;
        sort(begin(nums),end(nums));
        for(int i=0;i<=n-3;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            two_sum(nums,i+1,result,-nums[i]);
        }
        return result;
    }
};