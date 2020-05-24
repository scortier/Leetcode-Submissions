public class Solution {
    
    // new integer 
    
    public int maxDotProduct(int[] nums1, int[] nums2) {
        
        // araya input 
        
        Integer[][] dp = new Integer[nums1.length][nums2.length];
        
        // returnig value 
        
        return dot(nums1, nums2, 0, 0, dp);
    }
    
    // new pvt. class 
    

    private int dot(int[] nums1, int[] nums2, int i1, int i2, Integer[][] dp) {
        
        // if looping 
        
        if (dp[i1][i2] != null) {
            return dp[i1][i2];
        }
        
        // new integer 
        
        int res = Integer.MIN_VALUE;
        
        // if looping 
        
        if (i1 == nums1.length-1) {
            
            // for looping 
            
            for (int i = i2; i < nums2.length; i++) {
                res = Math.max(res, nums1[i1]*nums2[i]);
            }
            
            // returning answrr 
            
            dp[i1][i2] = res;
            return res;
        }
        
        // if looping 
        
        if (i2 == nums2.length-1) {
            
            // for looping 
            
            for (int i = i1; i < nums1.length; i++) {
                res = Math.max(res, nums1[i]*nums2[i2]);
            }
            
            // output ansewe r
            
            dp[i1][i2] = res;
            return res;
        }
        
        // resolution maths 
        
        
        res = Math.max(res, nums1[i1]*nums2[i2]);
        
        // maths maximum 
        
        res = Math.max(res, nums1[i1]*nums2[i2]+dot(nums1, nums2, i1+1, i2+1, dp));
        
         // maths maximum 
        
        res = Math.max(res, dot(nums1, nums2, i1, i2+1, dp));
        
         // maths maximum 
        
        
        res = Math.max(res, dot(nums1, nums2, i1+1, i2, dp));
        
         // maths maximum 
        
        dp[i1][i2] = res;
        
        // answer output 
        
        return res;
    }
}