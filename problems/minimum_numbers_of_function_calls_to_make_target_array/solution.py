class Solution:
    def minOperations(self, nums: List[int]) -> int:
        
        # slef caching the vals
        
        self.cache = {}
        # new define 
        
        def ops(n):
            
            # init
            
            twos = 0
            ones = 0
            num = n
            # looping out the condition
            
            while n > 0:
                
                # if loop 
                if n in self.cache:
                    o,t = self.cache[n]
                    ones += o
                    twos += t
                    
                    # cont
                    
                    break
                    
                    # even 
                    
                if n % 2 == 0:
                    
                    # exc
                    
                    n = n //2
                    twos += 1
                    
                    # other
                    
                else:
                    n = n - 1
                    ones += 1
                    
                    # arr 
                    
            self.cache[num] = (ones,twos)
            
            # exit
            
            return (ones, twos)
        final_twos = 0
        final_ones = 0
        
        # for looping
        
        for i in nums:
            o,t  = ops(i)
            
            # 
            final_ones += o
            
            # maximum 
            
            final_twos = max(final_twos, t)
            # exit
            
        return final_ones + final_twos