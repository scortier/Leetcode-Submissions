class Solution {
public:
    vector<int> mostVisited(int n, vector<int>& rounds) {
        
        // vector result 
        
        vector<int> res;
        int begin = rounds[0];
        
        // arrr
        
        int end = rounds[rounds.size() - 1];
        
        // if looping
        if (begin <= end) {
            // for case
            
            for (int i = begin; i <= end; i++) {
                res.push_back(i);
            }
        }
        
        // other condition
        
        else {
            
            // for loop
            
            for (int i = 1; i <= end; i++) {
                res.push_back(i);
            }
            
            // for looping
            
            for (int i = begin; i <= n; i++) {
                res.push_back(i);
            }
        }
        
        // exit result 
        
        return res;
    }
}; 