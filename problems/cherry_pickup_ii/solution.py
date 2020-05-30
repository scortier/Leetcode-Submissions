# author : Siddhant Khare 
# Solution Starts 



# importing 

from functools import lru_cache

# solutoion starts 



class Solution:
    
    # new varsiables definig 
    
    def cherryPickup(self, grid: List[List[int]]) -> int:
        
        # new vars  m & N 
        
        m, n = len(grid), len(grid[0])
        
        # modeule sappl 
        

        @lru_cache(None)
        
        # new ars 
        
        def dfs(x, y1, y2):
            
            # 3if loop 
            
            if y1 < 0 or y1 >= n or y2 < 0 or y2 >= n:
                
                # anss 
                
                return -10 ** 9

            
            # 3if loopin g
            
            if x == 0:
                
                 # 3if loopin g
                    
                if y1 == 0 and y2 == n - 1:
                    
                    # ans 
                    
                    return grid[0][y1] + grid[0][y2]
                
                 # if else  loopin g
                    
                else:
                    
                    # ans 
                    
                    return -10 ** 9
                
                # new vars 
                

            temp = -10 ** 9
            
            # 3for looping 
            
            for d1 in [-1, 0, 1]:
                
                # 3for looping
                
                for d2 in [-1, 0, 1]:
                    
                    # new vars 
                    
                    temp = max(temp, dfs(x - 1, y1 + d1, y2 + d2))
                    
                    # if ,nd   ;op 
                    
            if y1 != y2:
                
                # ans 
                
                temp += grid[x][y1] + grid[x][y2]
                
                # 4 else oop 
                
            else:
                # ans 
                
                temp += grid[x][y1]
                
                # 3 retungin kjdshfk 
            return temp
        
        # init alize 
        

        result = 0
        
        # 3for looping
        
        for i in range(n):
            
            # 3for looping
            
            for j in range(n):
                
                # answe 
                
                result = max(result, dfs(m - 1, i, j))
                
                # output anserr 
                
        return result

    
    # 3if loopin g
    

if __name__ == '__main__':
    
    # testing 
    
    solution = Solution()
    
    # outputin naswrr 
    
    print(solution.cherryPickup([[3, 1, 1], [2, 5, 1], [1, 5, 5], [2, 1, 1]]))
    
    # outputin naswrr 
    
    
    
    
    print(solution.cherryPickup([
        [1, 0, 0, 0, 0, 0, 1],
        [2, 0, 0, 0, 0, 3, 0],
        [2, 0, 9, 0, 0, 0, 0],
        [0, 3, 0, 5, 4, 0, 0],
        [1, 0, 2, 3, 0, 0, 6]
    ]))
    
    
    
    # outputin nafdgdsfgswrr 
    
    
    # outputin nadfhsdhswrr 
    
    # outputin nadfsdfgsswrr 
    
    
    print(solution.cherryPickup([[1, 0, 0, 3], [0, 0, 0, 3], [0, 0, 3, 3], [9, 0, 3, 3]]))
    
    # outputin naswrr 
    
    print(solution.cherryPickup([[1, 1], [1, 1]]))
    
    # outputin naswrr 
    
    # outputin naswrr 
    
    
    print(solution.cherryPickup(
        [[0, 8, 7, 10, 9, 10, 0, 9, 6],
         [8, 7, 10, 8, 7, 4, 9, 6, 10],
         [8, 1, 1, 5, 1, 5, 5, 1, 2],
         [9, 4, 10, 8, 8, 1, 9, 5, 0],
         [4, 3, 6, 10, 9, 2, 4, 8, 10],
         [7, 3, 2, 8, 3, 3, 5, 9, 8],
         [1, 2, 6, 5, 6, 2, 0, 10, 0]]
    ))
    
    
    # outputin naswrr fdgdfg
    
    # outputin naswrdfgdfgr 
    
    # outputin naswrfgdfgr 
    # outputin naswrrxcv 
    
    
    # finish 
    
    
    print(solution.cherryPickup(
        [[1, 0, 1],
         [1, 10, 1],
         [1, 0, 1]]
    )) 