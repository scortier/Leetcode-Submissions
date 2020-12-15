class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int p=0,mi=100000;
        vector<int> ans;
        if(n==0) return ans;
        for(int i=0;i<n;i++){
            if(mi>=abs(nums[i])){
                p=i;
                mi=abs(nums[i]);
            }
        }
        ans.push_back(nums[p]*nums[p]);
        int j=p+1,i=p-1;
        while(i>=0 && j<n){
            if(abs(nums[i])>abs(nums[j])){
                ans.push_back(nums[j]*nums[j]);
                j++;
            }
            else{
                ans.push_back(nums[i]*nums[i]);
                i--;
            }
        }

        if(i>=0){
            while(i>=0){
                ans.push_back(nums[i]*nums[i]);
                i--;
            }
        }

        if(j<=n-1){
            while(j<n){
                ans.push_back(nums[j]*nums[j]);
                j++;
            }
        }

        return ans;

    }
};