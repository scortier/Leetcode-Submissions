// mod defs


const MOD = 10e8+7

func numWays(s string) int {
    
    // variable array
    
	
	var arr []int64
    
    // range for loop
    
	for idx, by := range s {
        
        // base case
        
		if by == '1' {
			arr = append(arr, int64(idx))
		}
	}

	
    
    // other case 
	if len(arr) == 0 {
		i := len(s)
        
        // mod
        
		return (((i - 2) * (i - 1)) / 2) % MOD
	}
    
    // oddd
    
	if len(arr)%3 != 0 {
		return 0
	}
    
    // div 3
    

	oneNum := len(arr) / 3
    
    
    // result
    
	res := (arr[oneNum] - arr[oneNum-1]) * (arr[2*oneNum] - arr[2*oneNum-1])

    
    
    // exit
    
	return int(res % MOD)
}

// end
