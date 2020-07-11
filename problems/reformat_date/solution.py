class Solution(object):
    
    # months
    
    ms = ["Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"]
    
    # defin 
    
    def reformatDate(self, date):
        """
        :type date: str
        :rtype: str
        """
        
        # spliting 
        
        d, m, y = date.split(" ")
        
        d = d[:-2]
        
        # llooping 
        
        if int(d) < 10:
            d = "0" + d
            
            # indexing 
            
        m = self.ms.index(m) + 1
        
         # if looping 
            
        if m < 10:
            m = "0"+str(m)
            
            # exit
            
        return "{}-{}-{}".format(y, m, d)