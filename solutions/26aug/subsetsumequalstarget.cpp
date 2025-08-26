#include <vector>
#include <algorithm>
#include <stack>
using namespace std;


class Solution{   
public:
bool func(int idx, int sum, vector<int> arr, int target, int n){
    if(sum==target){
        return true;
    }
    if(idx==n){
        return false;
    }
    
    return func(idx+1, sum+arr[idx], arr, target, n)||
    func(idx+1, sum, arr, target, n);
}
    bool isSubsetSum(vector<int>arr, int target){
        int n=arr.size();
        return func(0, 0, arr, target, n);
    }
};