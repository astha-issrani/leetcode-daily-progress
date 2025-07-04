#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> getleftmaxarray(vector<int>& height,int& n){
        vector<int> leftmax(n);
        leftmax[0]=height[0];
        for(int i=1;i<n;i++){
            leftmax[i]=max(leftmax[i-1],height[i]);
        }
        return leftmax;
    }
    vector<int> getrightmaxarray(vector<int>& height,int& n){
        vector<int> rightmax(n);
        rightmax[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            rightmax[i]=max(rightmax[i+1],height[i]);
        }
        return rightmax;
    }
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> leftmaxarr=getleftmaxarray(height,n);
        vector<int> rightmaxarr=getrightmaxarray(height,n);
        int sum=0;
        for(int i=0;i<n;i++){
            int water=min(leftmaxarr[i],rightmaxarr[i])-height[i];
            sum=sum+water;
        }
        return sum;
    }
};