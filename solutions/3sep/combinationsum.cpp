#include <stack>
#include <string>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    vector<vector<int>> res;
    int sum = 0;
    
    void get(vector<int> &candidates, int pos, vector<int> &temp, int &target, int sum){
        if(sum==target){
            res.push_back(temp);
            return;
        }
        if(sum>target) {
            return;
        }
        for(int i=pos;i<candidates.size();i++){
            temp.push_back(candidates[i]);
            get(candidates,i,temp,target, sum + candidates[i]);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        get(candidates,0,temp,target,0);
        return res;
    }

};