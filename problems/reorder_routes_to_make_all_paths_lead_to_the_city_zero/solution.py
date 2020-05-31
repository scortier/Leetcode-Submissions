# Author : Siddhant Khare

class Solution:
    
    # definie 
    
    def minReorder(self, n: int, connections: List[List[int]]) -> int:
        
        # new exw 
        
        connections.sort(key= lambda x : x[1])
        
        # djkf g
        
        reach = {0}
        
        # no. o focir 
        
        count=0
        
        # for looping 
        
        for each in connections:
            
            # if looping 
            
            if each[1] in reach:
                
                # exe 
                
                reach.add(each[0])
                
                # elsree loop 
                
            else:
                
                # if loopign 
                
                if each[0] in reach:
                    
                    # circle coujtr 
                    
                    count+=1
                    
                    # asddhf of  alla
                    
                    reach.add(each[1])
                    
                    # 3exit 
                    
        return count