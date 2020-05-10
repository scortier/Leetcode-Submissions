# improting function tools

import functools
# definign class for Solution.py
class Solution:
    # defining lists variables 
    def ways(self, pizza: List[str], k: int) -> int:
        # defining m & n as a variable
        m, n = len(pizza), len(pizza[0])
        # defining mod values 
        MOD = 10 ** 9 + 7
        # new variable apple
        
        remainsApple = [[0] * n for _ in range(m)]
        
        # loop execution 
        
        for i in range(m - 1, -1, -1):
            # initial values , providing initial values
            
            rightApple = 0
            
            # looping j 
            
            for j in range(n - 1, -1, -1):
                
                # if-else looping 
                if pizza[i][j] == "A":
                    # priniting value 
                    
                    rightApple += 1
                    # other remaining values print
                    
                remainsApple[i][j] = (remainsApple[i + 1][j] if i != m - 1 else 0) + rightApple
                
                # defining other variables for second case 
                

        def rightHasApple(i, j):
            # if-else logical execution 
            
            if i == m - 1:
                # returning values
                
                return remainsApple[i][j] > 0
            else:
                 # returning values
                    
                return remainsApple[i][j] - remainsApple[i + 1][j] > 0
            
            # definign for next czase
            
            
        def belowHasApple(i, j):
            if j == n - 1:
                # returning values 
                return remainsApple[i][j] > 0
            else:
                # returning values 
                return remainsApple[i][j] - remainsApple[i][j + 1] > 0
            
            # improting from function tools
            

        @functools.lru_cache(None)
        # definign other for next case
        def dp(remainPieces, i, j):
            # if- else logical execution 
            if remainPieces == 1:
                # returning values 
                return 1 if remainsApple[i][j] > 0 else 0
            # if- else logical execution 
            if remainsApple[i][j] < remainPieces:
                # returning values 
                return 0
            # if- else logical execution 
            if i == m - 1 and j == n - 1:
                assert(False)
                ## initial values 
            res = 0
            seenAppleOnRight = False
            # for - while loop 
            for new_i in range(i + 1, m):
                seenAppleOnRight = seenAppleOnRight or rightHasApple(new_i - 1, j)
                # if- else logical execution
                if seenAppleOnRight:
                    res += dp(remainPieces - 1, new_i, j)
                    res %= MOD
                    # returning values as 0
            seenAppleBelow = False
            
            # for while loop
            
            for new_j in range(j + 1, n):
                seenAppleBelow = seenAppleBelow or belowHasApple(i, new_j - 1)
                # if- else logical execution
                if seenAppleBelow:
                    res += dp(remainPieces - 1, i, new_j)
                    res %= MOD
                    # returning values 
            return res
        # returning values 

        return dp(k, 0, 0)