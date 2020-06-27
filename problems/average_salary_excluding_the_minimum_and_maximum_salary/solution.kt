// solution 


class Solution {
    
    // integrsas 
    
     fun average(salary: IntArray): Double 
    {
        
        // sorting out the salary 
        
        
        salary.sort()
        
        // size of aar 
        
        
        val len = salary.size
        
        // slice & exit t
        
        return salary.slice(1..len - 2).average()
    }
    
    // ned 
}

// exit 
