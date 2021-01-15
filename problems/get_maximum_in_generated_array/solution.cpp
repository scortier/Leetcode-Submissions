class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n==0)  return 0;
        if(n==1)  return 1;

        int nums[n+1];          //dont use a vector her
        //int n = nums.size();

        int res=0;

        nums[0] = 0, nums[1] = 1;

        for(int i=0; i<n+1; i++){
            if(2*i < n+1){
                nums[2*i] = nums[i];
            }
            if (2 * i + 1 < n + 1) {
                nums[2 * i + 1] = nums[i] + nums[i + 1];
            } 
        }
        for(auto x: nums)
            cout << x << "\t";

        for (int i=0; i<n+1; i++) {
            res = max(res, nums[i]);
        }
        //res = *max_element(nums, nums+n+1);

        return res;

    }
};