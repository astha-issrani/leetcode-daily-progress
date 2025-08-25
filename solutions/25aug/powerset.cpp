#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> res;
        int subsets=1<<n;
        for(int num=0;num<subsets;num++){//8
            vector<int> list;
            for(int i=0;i<n;i++){//3
                if(num&(1<<i)){//checks every digit if it is 1 adds it otherwise doesn't
                    list.push_back(nums[i]);
                }
            }
            res.push_back(list);
        }
        return res;
    }
};