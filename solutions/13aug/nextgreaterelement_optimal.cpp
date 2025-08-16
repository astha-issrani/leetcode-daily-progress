#include<stdio.h>
#include<vector>
#include<iostream>
#include<stack>

using namespace std;

class nextgreaterelement{
    public:
    vector<int> nge(vector<int> arr){
        stack<int> st;
        vector<int> res(arr.size());
        for(int i=arr.size()-1;i>=0;i--){
            //if stack is empty, no greater element so -1
            if(st.empty()){
                res[i]=-1;
                st.push(arr[i]);
                continue;
            }
            if(st.top()<arr[i]){
                do{
                    st.pop();
                    if(st.empty()){
                        st.push(arr[i]);
                        res[i]=-1;
                        break;
                    }
                }
                while(st.top()<arr[i]);
            }
            if(st.top()>arr[i]){
                st.push(arr[i]);
                res[i]=st.top();
                continue;
            }
        }
        return res;
    }
};

int main(){
        vector<int> arr={4,12,5,3,1,2,5,3,1,2,4,6};
        nextgreaterelement obj;
        vector<int> res=obj.nge(arr);
        for(int num :res){
            cout<<num<<" ";
        }
}