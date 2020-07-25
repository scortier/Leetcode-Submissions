// constant value

const mod int = 1000000007

func numOfSubarrays(arr []int) int {
    
    // initialize
    
	even, odd := 0, 0
    
    // init answer 
	ans := 0
	for _, num := range arr {
        
        // looping 
        
		if num%2 == 1 {
            
            // answer
			odd, even = even+1, odd
		} else {
            
            // answer
			odd, even = odd, even+1
		}
        
        // end
		ans = (ans + odd) % mod
	}
    
    // exiut 
	return ans
}

// end