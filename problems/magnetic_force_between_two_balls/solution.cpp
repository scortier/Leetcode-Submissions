class Solution {
private:
    const int MAX_N = 1e5;
    int n, m;
    vector<int> x;
    
    // Bools
    
    bool C (int d){
        int last = 0;
        
        
        // for loop
        
        for (int i = 1; i < m; i++){
            int crt = last + 1;
            
            
            // while loop
            
            while (crt < n && x[crt] - x[last] < d) crt++;
            
            
            // if loop 
            
            if (crt == n) return false;
            last = crt;
            
        }
        
        // positive
        
        return true;
    }
    
    int solve (){
        
        // Sorting out
        
        sort(x.begin(),x.begin() + n);
        

        
        int lb = 0, ub = 1e9+7;
        
        // while loop
        
        
        
        while ( ub - lb > 1){
            
            int mid = lb + (ub - lb) / 2;
            
            
            // looping
            
            if ( C(mid) ) lb = mid;
            else ub = mid;
        }
        
        // answer
        
        return lb;
    }
    
    // end
    
    
    
    // public class
    
public:
    int maxDistance(vector<int>& position, int m) {
        // prnt
        
        this->x = position;
        
        // size
        
        this-> n = (int)position.size();
        this-> m = m;
        
        // imp
        return solve();
    }
    
    //end
    
};