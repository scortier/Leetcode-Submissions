class Solution {
    
    // integers
    
     fun kthFactor(n: Int, k: Int): Int {
         
         // counter 
         
        var count = 0
        var i = 1
         
         // looping 
         
         // while looping 
         /*
         
         println(Prob2().kthFactor(12, 3))
    println(Prob2().kthFactor(7, 2))
    println(Prob2().kthFactor(4, 4))
    println(Prob2().kthFactor(1, 1))
    println(Prob2().kthFactor(1000, 3))
    */
        while (i <= n) 
         {
             
             // looping 
             
            if (n.rem(i) == 0) count++
            if (count == k) return i
            i++
        }
         
         // exit 
         
        return -1
    }
     
     // end
      
}

// exi t
