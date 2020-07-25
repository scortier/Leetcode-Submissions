func numSplits(s string) int {
    
    // init p and q 
	p, q := make(map[uint8]int), make(map[uint8]int)

	for i := range s {
        
        // incr 1
		q[s[i]]++
	}

    
    // variable 
    
	var getCount = func(m map[uint8]int) int {
		count := 0
		var c uint8
        
        //looping 
        
		for c = 'a'; c <= 'z'; c++ {
			if m[c] > 0 {
				count++
			}
            
            //end
		}
        
        // end
		return count
	}
    
    // answers

	ans := 0
	for i := 0; i < len(s); i++ {
        
        // p and q +-
		p[s[i]]++
		q[s[i]]--
        
        // looping 
        
		if getCount(p) == getCount(q) {
			ans++
		}
        
        //e nd
	}
    
    // exit
    
	return ans
}