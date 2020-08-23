class Solution {
public:
    int findLatestStep(vector<int>& arr, int m) {
        int n = arr.size();
        if(m == n){
            return n;
        }
        
        // aghsh 
        
        map<int, int> hash;
        hash[1] = n;
        
        
        // for loop[ 
        
        for(int i = arr.size() - 1; i >= 0; i--){
            int v = arr[i];
            auto iter = hash.upper_bound(v);
            iter--;
            
            
            // aitot 
            
            auto tmp = *iter;
            hash.erase(iter);
            
            
            //init 
            int f = tmp.first;
            int l = tmp.second;
            if(f == v){
                f++;
                if(f + m - 1 == l){
                    return i;
                }
                hash[f] = l;
            }
            // conityioponm '
             
            else{
                if(f + m - 1 == v - 1 || v + 1 + m - 1 == l){
                    return i;
                }
                
                // ahsh 
                
                hash[f] = v - 1;
                hash[v + 1] = l;
            }
            
            // exit
            
        }
        
        return -1;
    }
};