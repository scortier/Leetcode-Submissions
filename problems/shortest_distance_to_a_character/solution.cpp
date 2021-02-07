class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        queue<pair<int,int>>q;
        vector<int>v;
        for(int i=0;i<s.length();i++) v.push_back(-1);
        for(int i=0;i<s.length();i++){
            if(s[i]==c)q.push({i,0});
        }
        while(!q.empty()){
            int idx=q.front().first, depth=q.front().second;
            q.pop();
            if(v[idx]==-1) {
                v[idx]=depth;
                if(idx+1<s.length())q.push({idx+1,depth+1});
                if(idx-1>=0)q.push({idx-1,depth+1});
            }
        }
        return v;
    }
};