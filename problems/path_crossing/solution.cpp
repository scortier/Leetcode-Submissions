class Solution {
    
    // partininf  
    
public:
    using pii = pair<int, int>;
    
    // bool s
    
    bool isPathCrossing(string path) {
        int x = 0;
        int y = 0;
        check.insert({0, 0});
        
        /*
        
        for(auto [mod, num]: cnts) {
            if(mod == 0) {
                if(num & 1) return false;
            } else {
                if(num != cnts[k - mod]) return false;
            }
        }
        
        */
        for(auto i :path) {
            if(i == 'N') {
                x += 1;
                if(check.count({x, y})) return true;
                check.insert({x, y});
            }
            
             /*
        
        for(auto [mod, num]: cnts) {
            if(mod == 0) {
                if(num & 1) return false;
            } else {
                if(num != cnts[k - mod]) return false;
            }
        }
        
        */
            
            if(i == 'S') {
                x -= 1;
                if(check.count({x, y})) return true;
                check.insert({x, y});
            }
            
             /*
        
        for(auto [mod, num]: cnts) {
            if(mod == 0) {
                if(num & 1) return false;
            } else {
                if(num != cnts[k - mod]) return false;
            }
        }
        
        */
            
            if(i == 'W') {
                y += 1;
                if(check.count({x, y})) return true;
                check.insert({x, y});
            }
            
             /*
        
        for(auto [mod, num]: cnts) {
            if(mod == 0) {
                if(num & 1) return false;
            } else {
                if(num != cnts[k - mod]) return false;
            }
        }
        
        */
            if(i == 'E') {
                y -= 1;
                if(check.count({x, y})) return true;
                check.insert({x, y});
            }
        }
        
        // exit 
        
        return false;
    }
    
    // sett 
    
    set<pii> check;
};