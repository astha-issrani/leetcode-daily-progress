#include <stack>
#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool ispalindrome(string s, int l, int r){
        while(l<r){
            if(s[l]!=s[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }

    void backtrack(string & s, vector<vector<string>> &result, vector<string> &curr,int idx){
        if(idx==s.size()){
            result.push_back(curr);
            return;
        }
        for(int i=idx;i<s.size();i++){
            if(ispalindrome(s,idx,i)){
                curr.push_back(s.substr(idx,i-idx+1));
                backtrack(s, result, curr, i+1);
                curr.pop_back();
            }  
        }
    }

    vector<vector<string>> partition(string s) {
        vector<string> curr;
        vector<vector<string>> result;
        backtrack(s, result, curr, 0);
        return result;
    }
};