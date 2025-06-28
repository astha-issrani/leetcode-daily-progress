#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {

        int n=height.size();
        int i=0;
        int j=n-1;
        int maxwater=0;
        while(i<j){
            int h=min(height[i],height[j]);
            int w=j-i;
            int area=h*w;
            if (area>maxwater){maxwater =area;}
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxwater;

    }
};