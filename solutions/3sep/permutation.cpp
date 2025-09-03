#include <stack>
#include <string>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    void backtrack(vector<int> &arr, vector<int> &nums, vector<vector<int>> &res, set<int> &s){
        if(arr.size()==nums.size()){
            res.push_back(arr);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i])==s.end()){
                arr.push_back(nums[i]);
                s.insert(nums[i]);
                backtrack(arr,nums,res,s);
                arr.pop_back();
                s.erase(nums[i]);
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        set<int> s;
        vector<vector<int>> res;
        vector<int> arr;
        backtrack(arr, nums, res, s);
        return res;
    }
};