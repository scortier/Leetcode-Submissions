class Solution {
    
    // integer
    
    int n;
    
    // new class
    
    private int[] cuts;
    
    // mapping
    
    private Map<String, Integer> cache;
    
    // new class
    

    private int dfs(int L, int R) {
        
        // final str
        
        final String key = L + "#" + R;
        
        //if looping
        
        if (cache.containsKey(key)) {
            
            // exit
            
            return cache.get(key);
        }
        int ans = Integer.MAX_VALUE;
        
        // for looping
        
        for (int cut : cuts) {
            if (cut > L && cut < R) {
                
                // answer
                // logic
                
                ans = Math.min(ans, (R - L) + dfs(L, cut) + dfs(cut, R));
            }
        }
        
        // answer
        
        ans = ans == Integer.MAX_VALUE ? 0 : ans;
        cache.put(key, ans);
        
        // exit
        
        return ans;
    }
    
    
    // public class default soln 
    
    public int minCost(int n, int[] cuts) {
        this.n = n;
        this.cuts = cuts;
        
        // hashmapping
        
        this.cache = new HashMap<>();
        
        // sort array
        
        Arrays.sort(this.cuts);
        
        // exit
        
        return dfs(0, n);
    }
}