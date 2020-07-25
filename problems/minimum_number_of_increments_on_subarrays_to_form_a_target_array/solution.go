func minNumberOperations(target []int) int {
    
    // init answer 
	ans := 0
	pos := 0
	for _, num := range target {
        
        // looping 
        
		if num > pos {
            
            // answerr 
            
			ans += num - pos
		}
        
        // init 
        
		pos = num
	}
    
    // exit
    
	return ans
}

// end