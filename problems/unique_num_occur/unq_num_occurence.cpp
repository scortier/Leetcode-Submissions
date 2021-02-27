class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> mp1;
        map<int,int> mp2;
        int i,n;
        n=arr.size();
        for(i=0;i<n;i++)
        {
            mp1[arr[i]]++;
        }
        map<int,int> :: iterator it;
        for(it=mp1.begin();it!=mp1.end();it++)
        {
            mp2[it->second]++;
        }
        if(mp1.size()==mp2.size())
            return true;
        else
            return false;
    }
};
