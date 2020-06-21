class Solution {
    public int[] avoidFlood(int[] rains) 
    {
        int n = rains.length;
        Map<Integer, Integer> map = new HashMap<>(); 
        int[] days = new int[n];
        Arrays.fill(days, -1);
        int[] res = new int[n];
        
        /*
                if rain == 0:
            avalid.append(i)
            continue
        # 下雨，并且之前为空
        if rain not in full:
            full[rain] = i
            continue
        # 下雨，之前满了，尝试提前抽空
        if not avalid:
            return []
        _flag = False
        for _idx in avalid:
        */
        
        for (int i = 0, dr = 0; i < n; i++) 
        {
            int lake = rains[i];
            if (lake > 0) {
                res[i] = -1;
                
                /*
                if rain == 0:
            avalid.append(i)
            continue
     
        if not avalid:
            return []
        _flag = False
        for _idx in avalid:
        */
                
                if (!map.containsKey(lake)) 
                {
                    // lake 为空
                    map.put(lake, i);
                } 
                
                /*
                if rain == 0:
            avalid.append(i)
            continue
  
            return []
        _flag = False
        for _idx in avalid:
        */
                else {
                    boolean done = false;
                    for (int di = 0, last = map.get(lake); di < dr; di++) 
                    {
                        
                        /*
                if rain == 0:
            avalid.append(i)
            continue
   
        if rain not in full:
            full[rain] = i
            continue
      
        if not avalid:
            return []
        _flag = False
        for _idx in avalid:
        */
                        
                        if (days[di] < last) continue;
                        res[days[di]] = lake;
                        days[di] = -1;
                        
                        // mapps 
                        
                        
                                /*
                if rain == 0:
            avalid.append(i)
            continue
    
            return []
        _flag = False
        for _idx in avalid:
        */
                        
                        map.put(lake, i);
                        done = true;
                        break;
                    }
                    
                            /*
                if rain == 0:
            avalid.append(i)
            continue
    
            return []
        _flag = False
        for _idx in avalid:
        */
                    
                    if (!done) return new int[0]; 
                }
            } else {
                
                
                /*
                if rain == 0:
            avalid.append(i)
            continue
        
        if rain not in full:
            full[rain] = i
            continue
       
        if not avalid:
            return []
        _flag = False
        for _idx in avalid:
        */
                
                days[dr++] = i;
                res[i] = 1;
            }
        }
        
        // exit
        
        return res;
    }
    
            /*
                if rain == 0:
            avalid.append(i)
            continue
    
            return []
        _flag = False
        for _idx in avalid:
        */
    

    public static void main(String[] args) {
        Solution solution = new Solution();
        {
            
            /*
                if rain == 0:
            avalid.append(i)
            continue
    
            return []
        _flag = False
        for _idx in avalid:
        */
            
            int[] rains = new int[]{2, 3, 0, 0, 3, 1, 0, 1, 0, 2, 2};
            int[] res = solution.avoidFlood(rains);
            System.out.println(Arrays.toString(res));
        }
    }
}