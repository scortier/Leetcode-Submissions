class Solution:
    def maxLengthBetweenEqualCharacters(self, s: str) -> int:
        # init
        
        temp = {}
        
        # answer 
        
        output = -1
        for i in range(len(s)):
            # check  
            if s[i] not in temp:
                # ans
                
                temp[s[i]] = i
            else:
                # ans
                
                output = max(output, i-temp[s[i]]-1)
                
                # returning answer 
        return output