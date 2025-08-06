#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for(char c:s){
            if(c=='{'){
                st.push('}');
                continue;
            }
            if(c=='['){
                st.push(']');
                continue;
            }
            if(c=='('){
                st.push(')');
                continue;
            }
            
            else{
                if(st.empty()||st.top()!=c){
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};