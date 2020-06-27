class Solution {
    
    // publvi clasd 
    
    public static int longestSubarray(int[] nums) 
    {
        
                    /*
            
            for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                k--;
            }
            if (k == 0) {
                return i;
            }
        }
        */
        
        List<Integer> res = new ArrayList<>();
        int len = nums.length;
        
                    /*
            
            for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                k--;
            }
            if (k == 0) {
                return i;
            }
        }
        */
        for (int i = 0; i < len; i++) {
            if (nums[i] != 0) continue;
            int lo = i - 1, hi = i + 1;
            
            /*
            
            for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                k--;
            }
            if (k == 0) {
                return i;
            }
        }
        */
            while (lo >= 0 && nums[lo] == 1) {
                lo--;
            }
            while (hi < len && nums[hi] == 1) {
                hi++;
            }
        
            
            // adding 
            
            res.add(hi - lo - 2);// end 
            
        }
        
                    /*
            
            for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                k--;
            }
            if (k == 0) {
                return i;
            }
        }
        */
        
        int ans = Integer.MIN_VALUE;
        if (res.size() < 1) return len - 1;

        
        // exit 
        
        return res.stream().mapToInt(Integer::intValue).max().getAsInt();
        
        // exit 
        
    }

    
                /*
            
            for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                k--;
            }
            if (k == 0) {
                return i;
            }
        }
        */
    
    public static void main(String[] args) 
    {
        int[] nums = {1, 1, 0, 1};
        
        // answer 
        
        System.out.println(longestSubarray(nums));

    }
}