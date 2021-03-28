class Solution {
public:
    string originalDigits(string s) {
        int n=s.length();
        if(!n)return "";
        int num[]={0,2,4,6,8,1,3,5,7,9};
        string word[]={"zero","two","four","six","eight","one","three","five","seven","nine"};
        char hint[]={'z','w','u','x','g','o','h','f','s','i'};
        vector<int> cnt(26,0);
        string ans="";
        for(auto it:s)cnt[it-'a']++;
        for(int i=0;i<=9;i++){
            int idx=hint[i]-'a';
            int count=cnt[idx];
            for(int j=0;j<word[i].length();j++)
                cnt[word[i][j]-'a']-=count;
            while(count--)
                ans+=to_string(num[i]);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};