#include<stdio.h>
#include<stack>
#include<vector>
#include <iostream>

using namespace std;
class nextgreaterelement{
public:
    vector<int> nge(vector<int> arr){
        vector<int> res;
        for(int i=0;i<arr.size();i++){
            int next=-1;
            for(int j=i+1;j<arr.size();j++){
                if(arr[i]<arr[j]){
                    next=arr[j];
                    break;
                }
            }
            res.push_back(next);
        }
        return res;
    }   
};

int main(){
        nextgreaterelement obj;
        vector<int> arr={4,12,5,3,1,2,5,3,1,2,4,6};
        vector<int> res=obj.nge(arr);
        for(int num:res){
            cout<<num<<" ";
        }
        return 0;
    }