# Author : Siddhant Khare 

class Solution:
    
    # maximum prod
    
    def maxProduct(self, nums: List[int]) -> int:
        
        # numerals sorting arra y
        
        nums = sorted(nums, reverse=True)
        
        # logical executio n
        
        prod = (nums[0] - 1) * (nums[1] - 1)
        
        # exit 
        
        return prod