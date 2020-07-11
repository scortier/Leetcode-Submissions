class Solution:
    
    # ranging 
    
    def rangeSum(self, nums: list, n: int, left: int, right: int) -> int:
        
        # arr 
        
        res = []
        
        # for looping last term of range 
        
        for l in range(1, n + 1):
            i = 0
            
            # while  case 
            
            while i + l <= n:
                
                # add 
                
                res.append(sum(nums[i:i + l]))
                i += 1
                
                # sorting  
                
        res.sort()
        
        # exit 
        
        return sum(res[left - 1:right]) % (10 ** 9 + 7)

