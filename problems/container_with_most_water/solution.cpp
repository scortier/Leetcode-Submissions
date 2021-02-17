class Solution {
public:
    int maxArea(vector<int>& height) {

        int res=0;
        int left = 0;
        int right = height.size()-1;
        while(left < right){
            if(height[left]<height[right]){
                res = max(res,height[left] * (right - left ));
                left++;
            }
            else{
                res = max(res,height[right]*(right-left));
                right--;
            }
        }
        return res;
    }
};