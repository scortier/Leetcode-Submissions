// Author : Siddhant Khare

//pkgs

package main

// sortign aaray

import "sort"

// function 


func canBeEqual(target []int, arr []int) bool {
    
    // sorting aara y
    
	sort.Slice(target, func(i, j int) bool { return target[i] < target[j] })
    
    // another sorr t 
    

	sort.Slice(arr, func(i, j int) bool { return arr[i] < arr[j] })
    
    // fro loopig 

	for i := 0; i < len(target); i++ {
        
        // if looping 
        
		if target[i] != arr[i] {
            
            // ans 
            //exit 
            
			return false
		}
        
        // eit 
        
	}
    
    // exit 
    
	return true
}

// close

// end