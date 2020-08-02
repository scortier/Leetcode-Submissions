class Solution {
    
    // public class
    
    public int getWinner(int[] arr, int k) 
    {
        
        // linked list
        
        List<Integer> list = new LinkedList<>();
        
        
        
        // maximuym vals
        
        int max = Integer.MIN_VALUE;
        
        // loop 1
        
        for (int el : arr) 
        {
            if (el > max) max = el;
            list.add(el);
        }
        
        // if loop 
        
        if (k >= arr.length) 
        {
            
            // exit max
            
            return max;
        }
        
        // mapping
        
        Map<Integer, Integer> map = new HashMap<>();
        while (true)
        {
            
            // two conds
            
            int first = list.get(0);
            int second = list.get(1);
            
            // if loop 
            
            if (first > second)
            {
                
                // mapping
                
                map.put(first, map.getOrDefault(first,0)+1);
                
                // looping
                 
                if (map.get(first) == k) 
                {
                    
                    // exit 1
                    
                    return first;
                }
                
                // removing prev
                
                list.remove(1);
                
                // adding 2nd
                
                list.add(second);
            }
            
            // else loop 
            
            else
            {
                
                // mapping 
                
                map.put(second, map.getOrDefault(second,0)+1);
                
                // if loop 
                
                if (map.get(second) == k)
                {
                    
                    // exit 2nd
                    
                    return second;
                }
                
                // remove
                
                list.remove(0);
                list.add(first);
            }
            
            // end
        }
        
        // end
    }
    
    // end
    
}