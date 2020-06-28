class Solution {
public:
    bool canArrange(vector<int> & arr, int k) {
        unordered_map<int, int> cnts;
        
        /*
        
        if(i == 'W') {
                y += 1;
                if(check.count({x, y})) return false;
                check.insert({x, y});
            }
            if(i == 'E') {
                y -= 1;
                if(check.count({x, y})) return false;
                check.insert({x, y});
            }
            
            */
        for(auto num: arr) {
            int mod = ((num % k) + k) % k;
            cnts[mod] ++;
        }
        
             /*
        
        if(i == 'W') {
                y += 1;
                if(check.count({x, y})) return false;
                check.insert({x, y});
            }
            if(i == 'E') {
                y -= 1;
                if(check.count({x, y})) return false;
                check.insert({x, y});
            }
            
            */
        
        for(auto [mod, num]: cnts) {
            if(mod == 0) {
                if(num & 1) return false;
            } else {
                if(num != cnts[k - mod]) return false;
            }
        }
        return true;
    }
};