func numSub(s string) int {
    
    // new variables
    
	var subs []int
	var cur int
    
    // for looping 
    
	for _, str := range []byte(s) {
        
        // cond 1 try
        
		if string(str) == "1" {
			cur += 1
		} else { // cond 2
            
			subs = append(subs, cur)
			cur = 0
		}
	}
    
    // condf 2
     
	if cur != 0 {
		subs = append(subs, cur)
	}
    
    // anss
    
	print(subs)
	res := 0
    
    // for lopping 
    
	for _, sub := range subs {
        
        // rewsult 
        
		res += sub * (sub + 1) / 2
	}
    
    // exit
     
	return res % 1000000007
}

// end 
