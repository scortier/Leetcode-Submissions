# Author : Siddhant Khare

# Solution starts 


from typing import List

# solution class  shkjf 



class Solution:
    
    #  new vars definig 
    
    def checkIfPrerequisite(self, n: int, prerequisites: List[List[int]], queries: List[List[int]]) -> List[bool]:
        
        # boolneans jhjfhks
        
        mat = [[False] * n for _ in range(n)]
        
        # for loop
        
        for u, v in prerequisites:
            
            # 3exrut 
            
            mat[u][v] = True

            
            # 3for looopin fp 
            
        for k in range(n):
             # 3for looopin fp 
                
            for i in range(n):
                
                 # 3for looopin fp 
                    
                for j in range(n):
                    
                     # 3for looopin fp 
                        
                    if mat[i][k] and mat[k][j]:
                        
                        
                        # boolsl corre
                        
                        mat[i][j] = True
                        
                        
                        ## ans 
                        

        result = []
        
         # 3for looopin fp 
            
        for u, v in queries:
            
            # excutoo n
            
            result.append(mat[u][v])
            
            # answer 
            
        return result
    
    
    ## test cases s
    
    
    # if loop 
    


if __name__ == '__main__':
    ## test cases s
    
    
    # if loop 
    
    solution = Solution()
    ## test cases s
    
    
    # if loop 
    
    print(solution.checkIfPrerequisite(2, [[1, 0]], [[0, 1], [1, 0]]))
    ## test cases s
    
    
    # if loop 
    
    print(solution.checkIfPrerequisite(2, [], [[0, 1], [1, 0]]))
    ## test cases s
    
    
    # if loop 
    
    print(solution.checkIfPrerequisite(3, [[1, 2], [1, 0], [2, 0]], [[1, 0], [1, 2]]))
    ## test cases s
    
    
    # if loop 
    
    print(solution.checkIfPrerequisite(3, [[1, 0], [2, 0]], [[0, 1], [2, 0]]))
    ## test cases s
    
    
    # if loop 
    print(solution.checkIfPrerequisite(5, [[0, 1], [1, 2], [2, 3], [3, 4]], [[0, 4], [4, 0], [1, 3], [3, 0]]))
    
    ## end 