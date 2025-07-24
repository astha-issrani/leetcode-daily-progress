 #include <vector>
#include <algorithm>
#include <string>
#include <map>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> mp;
        for(string s:strs){
            string sorted_word=s;
            sort(sorted_word.begin(),sorted_word.end());
            mp[sorted_word].push_back(s);
            
        }
        vector<vector<string>> result;
        for( auto it:mp){
            result.push_back(it.second);
        }
        return result;
    }
};