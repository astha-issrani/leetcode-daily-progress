#include <stack>
#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

class Solution {
public:
    void backtrack(vector<int> &candidates, int target, vector<vector<int>> &res, int pos,
    vector<int> &arr, int sum) {
        if(target==sum){
            res.push_back(arr);
            return;
        }
        if(target<sum){
            return;
        }
        for(int i=pos;i<candidates.size();i++){
            if(i>pos && candidates[i]==candidates[i-1]){
                continue;
            }
            arr.push_back(candidates[i]);
            backtrack(candidates, target, res, i+1, arr, sum+candidates[i]);
            arr.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> arr;
        sort(candidates.begin(),candidates.end());
        backtrack(candidates, target, res, 0, arr, 0);
        return res;
    }
};