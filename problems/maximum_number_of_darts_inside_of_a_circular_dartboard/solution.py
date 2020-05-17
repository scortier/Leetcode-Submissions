class Solution:
    
    # new defines 
    
    def numPoints(self, points: List[List[int]], r: int) -> int:
        r2, N, max_res, map_t = r ** 2, len(points), 1, set()
        
        # new defines
        
        def get_mid(a, b):
            
            # new varsa
            
            ax, ay = a
            # new varsa
            bx, by = b
            # new varsa
            lx = bx - ax
            # new varsa
            
            ly = by - ay
            # new varsa
            
            lxy = (lx ** 2 + ly ** 2) ** 0.5
            
            # if looping 
            
            if (lxy / 2) ** 2 > r2:
                
                # return 
                
                return (None, None), (None, None)
            
            # new avrs
            
            l = (r2 - (lxy / 2) ** 2) ** 0.5
            yy = l * lx / lxy
            xx = l * ly / lxy
            mx = (ax + bx) / 2
            my = (ay + by) / 2
            
            # returning 
            
            return (mx + xx, my - yy), (mx - xx, my + yy)
        
        # defining 
        
        def is_in(rx, ry, x, y):
            
            # new varsa
            
            # new varsa
            
            lx = rx - x
            ly = ry - y
            # print(x, y, lx ** 2 + ly ** 2 - r2)
            
            # returnign valuews
            
            return lx ** 2 + ly ** 2 <= r2 + 0.01
        
        # defioening count 
        
        def count_in(rx, ry):
            
            # reyitning 
            
            return len([1 for ii in points if is_in(rx, ry, ii[0], ii[1])])
        
        # for vakler 
        
        for ii in range(N):
            
            # fro loops
             
            for jj in range(ii + 1, N):
                # l9oguival input 
                
                (rx1, ry1), (rx2, ry2) = get_mid(points[ii], points[jj])
                
                # print(rx1, ry1, rx2, ry2)
                
                # if elde lopung
                
                if rx1 is None:
                    continue
                    
                    # if else looping 
                    
                if (rx1, ry1) not in map_t:
                    c1 = count_in(rx1, ry1)
                    
                    # else conditytiopn 
                    
                else:
                    c1 = 0
                    
                    # if conditiopn 
                    
                if (rx2, ry2) not in map_t:
                    c2 = count_in(rx2, ry2)
                    # else loops 
                    
                else:
                    c2 = 0
                    # logical executuion 
                    
                map_t.add((rx1, ry1))
                map_t.add((rx2, ry2))
                
                # loguical exeuvtyion 
                
                
                
                max_res = max(c1, c2, max_res)
                
                # return answer 
                
        return max_res