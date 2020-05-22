class Solution {
public:
    bool comp (int a,int b){
        return a>b;
    }
    string frequencySort(string s) {
        unordered_map<char,int>freq;
        for(auto c:s){
            freq[c]++;
        }
        vector<pair<int,char>>vect;
        for(auto it:freq){
            vect.push_back({it.second,it.first});
        }
        sort(vect.rbegin(),vect.rend());
        string str;
        for(int i=0;i<vect.size();i++){
            while(vect[i].first--)
             str+=vect[i].second;
        }
        return str;
    }
};