class Solution:
    def checkArithmeticSubarrays(self, nums: List[int], l: List[int], r: List[int]) -> List[bool]:
        ## output answer 
        
        output = []
        
        # looping 
        
        for left, right in zip(l, r):
            #arrya osrt
            
            currArr = sorted(nums[left: right+1], reverse = True)
            
            # true 
            isSeq = True
            
            # for looping 
            
            for i in range(1, len(currArr)-1):
                # if looping 
                
                if currArr[i]-currArr[i-1] != currArr[i+1]-currArr[i]:
                    # false 
                    isSeq = False
                    break
                    # answer 
                    
            output.append(isSeq)
            # answer 
            
        return output