class Solution {
public:
int firstUniqChar(string s) {
unordered_map<char, pair<int,int>> mp;

    int i =0;
    
    for(auto &c: s){
        if(!(mp[c].first)){
            mp[c].first =i;
            mp[c].second += 1; 
        } else
            mp[c].second += 1; 
            
        i++;
    }
    
	for(i = 0 ; i < s.length(); i++){
        if(mp[s[i]].second < 2)
            return mp[s[i]].first;
    }
    return -1;
}
};