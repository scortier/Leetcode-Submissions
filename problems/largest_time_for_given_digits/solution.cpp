class Solution {
public:
    string largestTimeFromDigits(vector<int>& arr) {
        string ans = "", res;
        sort(arr.begin(),arr.end());
        
        do{
            if((arr[0] ==2 && arr[1]<=3 || arr[0]<2) && arr[2]<=5){
                res = to_string(arr[0])+to_string(arr[1])+ ":" + to_string(arr[2]) + to_string(arr[3]);
            }
            ans = max(ans,res);
        }while(next_permutation(arr.begin(),arr.end()));
        
        return ans;
    }
};