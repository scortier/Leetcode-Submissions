func numTriplets(nums1 []int, nums2 []int) int {
    
    // mapping
    
	m2 := make(map[int]int)
	for i := 0; i < len(nums2)-1; i++ {
		for j := i + 1; j < len(nums2); j++ {
            
            // array ++
			m2[nums2[i]*nums2[j]]++
		}
        // end
	}
	m1 := make(map[int]int)
    
    // for loop
    
	for i := 0; i < len(nums1)-1; i++ {
		for j := i + 1; j < len(nums1); j++ {
            
            // j ++
			m1[nums1[i]*nums1[j]]++
		}
	}
    
    // exit handle

	return handle(nums1, m2) + handle(nums2, m1)
}


// listing & mapping

func handle(nums1 []int, m map[int]int) int {
    
    // init result
	res := 0
	for _, n := range nums1 {
        
        // plus and sq
		res += m[n*n]
	}
    
    // exit result
    
	return res
}

// end