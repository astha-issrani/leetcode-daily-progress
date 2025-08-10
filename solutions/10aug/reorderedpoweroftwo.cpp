#include <stack>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string getsortednumber(int n){
        string s=to_string(n);
        sort(begin(s),end(s));
        return s;
    }
    bool reorderedPowerOf2(int n) {
        string s=getsortednumber(n);
        for(int p=0;p<29;p++){
            if(s==getsortednumber(1<<p)){
                return true;
            }
        }
        return false;
    }
};