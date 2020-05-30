# solution starts 
# Author : Siddhant Khare

class Solution:
    
    # defining 
    
    
    # boolean 
    
    def hasAllCodes(self, s: str, k: int) -> bool:
        
        # new vas 
        
        c = set()
        
        # for looping 
        
        for i in range(len(s) - k + 1):
            
            # execution 
            
            c.add(s[i:i + k])
            
            # returning ans 
            
        return len(c) == 2 ** k


    
    # if loop
    
if __name__ == '__main__':
    
    # answer 
    
    solution = Solution()
    
    # answer 
    
    print(solution.hasAllCodes('00110110', 2))
    
    # answer 
    
    print(solution.hasAllCodes('00110', 2))
    
    # answer 
    
    print(solution.hasAllCodes('0110', 1))
    
    # answer 
    
    print(solution.hasAllCodes('0110', 2))
    
    # answer 
    
    print(solution.hasAllCodes('0000000001011100', 4))