# solution class

class SubrectangleQueries:
    
    # defimngi new classs
    

    def __init__(self, rectangle: List[List[int]]):
        
        # auto 
        
        self.rectangke = rectangle

        
        # new defs 
        
    def updateSubrectangle(self, row1: int, col1: int, row2: int, col2: int, newValue: int) -> None:
        
        # for looping 
        
        for i in range(row1, row2+1):
            
            # anotyher foer loop 
            
            for j in range(col1, col2+1):
                
                # auto in araay 
                
                self.rectangke[i][j] = newValue

                
                # morwe deinging 

    def getValue(self, row: int, col: int) -> int:
        
        # returnign the vals 
        
        return self.rectangke[row][col]

    # ends
    
    # test and outpuyt 
    
    if __name__ == 'Solution':
        
        # answer print 
        
        s = Solution()

        
        # output 
        
        print(s)