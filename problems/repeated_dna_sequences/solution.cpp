class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> ans;
        int len = s.length();

        if(len<10)
            return ans;

        unordered_map<string,int> mp;

        string make = s.substr(0,10);

        mp[make] = 1;

        for(int i=10;i<len;i++){
            make+= string(1,s[i]);
            // make.erase(make.begin());
            make = make.substr(1,10);
            ++mp[make];
        }

        for(auto v:mp){
            if(v.second>1)
                ans.push_back(v.first);
        }

        return ans;
    }
};