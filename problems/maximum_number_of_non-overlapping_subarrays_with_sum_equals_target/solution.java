class Solution {
    // static integer
    
    public static int maxNonOverlapping(int[] nums, int target) {
        int len = nums.length;
        
        // array
        
        int[] sum = new int[len + 1];
        
        // result init zero
        
        int res = 0;
        
        // mapping
        
        Map<Integer, Integer> map = new HashMap<>();
        int prev = 0;
        
        // from 0 0
        map.put(0, 0);
        
        // for looping
        
        for (int i = 0; i <len; i++) {
            
            // array 
            
            sum[i + 1] = sum[i] + nums[i];
            
            // init
            
            int val = sum[i + 1] - target;
            
            // if looping
            
            if (map.containsKey(val) && map.get(val) >= prev) {
                
                // incr 
                
                res++;
                
                // add by one 
                prev = i+1;
                
            }
            
            // array 
            
            map.put(sum[i + 1], i+1);
        }
        
        // exit
        
        return res;
    }
}