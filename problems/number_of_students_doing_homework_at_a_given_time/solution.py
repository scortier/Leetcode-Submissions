class Solution:
    
    # defining busy student 
    
    def busyStudent(self, startTime: List[int], endTime: List[int], queryTime: int) -> int:
        
        # date sheet 
        
        timesheet = {}
        
        # for looping 
        
        for idx, times in enumerate(zip(startTime, endTime)):
            start, end = times[0], times[1]
            
            # for looping 
            
            for i in range(start, end + 1):
                
                # if looping 
                
                if i in timesheet:
                    timesheet[i].append(idx)
                    
                    # else condtit o n 
                    
                else:
                    timesheet[i] = [idx]
                    
                    # returing output 
                    
        return len(timesheet[queryTime]) if queryTime in timesheet else 0