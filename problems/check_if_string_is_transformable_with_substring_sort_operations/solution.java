class Solution {
    public boolean isTransformable(String s, String t) {
        
        // length of string 
        
        int len = s.length();
        
        // listing the string
        
        List<int[]>[] lists = new ArrayList[10];
        
        // for looping
        
        for (int i = 0; i < 10; ++i) {
            lists[i] = new ArrayList<>();
        }

        
        int[] count = new int[10];
        
        // character array
        
        for (char c : s.toCharArray()) {
            int p = c - '0';
            count[p] += 1;
            
            // init counter 
            // && temp 
            
            int[] tmp = new int[p + 1];
            
            // condition till p
            
            for (int i = 0; i <= p; ++i) {
                tmp[i] = count[i];
            }
            
            // lsiting out and adding  temp 
            
            lists[p].add(tmp);
        }
        
        // end
              
        count = new int[10];
        
        // for looping
         
        for (char c : t.toCharArray()) {
            int p = c - '0';
            
            // incr counter
            
            count[p] += 1;
            
            // checking size 
            
            if (lists[p].size() < count[p]) {
                return false;
            }
            // listing and getting out the count
            
            int[] last = lists[p].get(count[p] - 1);
            
            // for looping
            
            for (int i = 0; i <= p; ++i) {
                if (last[i] > count[i]) {
                    
                    // exit 0
                    return false;
                }
                // end
            }
            //end
        }
        
        // exit 1

        return true;
    }
    
    // end
}

// exit
