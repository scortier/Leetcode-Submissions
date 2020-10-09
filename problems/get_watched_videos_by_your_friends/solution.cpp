class Solution {
public:
    static bool comp(pair<int, string> &a, pair<int, string> &b){
        return a.first == b.first ? a.second<b.second : a.first < b.first;
    }
    
    
    vector<string> watchedVideosByFriends(vector<vector<string>>& watchedVideos, vector<vector<int>>& friends, int id, int level) {
        unordered_map<string, int> videos;
        
        int n = friends.size();
        
        vector<bool> vis(n, 0);
        
        queue<pair<int, int>> q;
        q.push({id, 0});
        vis[id] = true;
        while(!q.empty()){
            auto p = q.front();
            q.pop();
            
            if(p.second == level){
                for(string x:watchedVideos[p.first]){
                    videos[x]++;
                }
                continue;
            }
            
            for(int x:friends[p.first]){
                if(!vis[x]){
                    vis[x] = true;
                    q.push({x, p.second+1});
                }
            }
        }
        
        vector<pair<int, string>> vtr;
        
        for(auto itr:videos) vtr.push_back({itr.second, itr.first});
        
        sort(vtr.begin(), vtr.end(), comp);
        
        vector<string> res;
        
        for(auto v:vtr) res.push_back(v.second);
        
        return res;
    }
};