class Solution {
    
    // solutions 
    
    public String[] getFolderNames(String[] names) 
    
    {
        
        // spliting al 
        
        names[0].split("(\\d+)");

        
        
        // maps string 
        
        Set<String> sets = new HashSet<>();
        
        // MAP 
        
        HashMap<String,Integer> curMin=new HashMap<>();
        String[] result=new String[names.length];

        
        // LOOP 
        
        for (int i=0;i<names.length;i++ ) 
        {
            String name=names[i];
            
            // loop
             
                if(sets.contains(name))
                {
                    
                    // iff loop 
                    
                    if(curMin.containsKey(name))
                    {
                        
                              /*
                        
                         if (buffCnt == 0) {
                break;
            }
            while (offset < n && buffOffset < buffCnt) {
                buf[offset++] = buff[buffOffset++];
            }
            */
                        
                        int incr = curMin.get(name);
                        StringBuilder sb=new StringBuilder(name);
                        sb.append('(').append(incr).append(')');
                        
                        // loop 
                        
                        while (sets.contains(sb.toString()))
                        {
                            incr+=1;
                            sb=new StringBuilder(name);
                            
                            // appending 
                            
                            sb.append('(').append(incr).append(')');
                        }
                        
                        /*
                        
                         if (buffCnt == 0) {
                break;
            }
            while (offset < n && buffOffset < buffCnt) {
                buf[offset++] = buff[buffOffset++];
            }
            */
                        curMin.put(name,incr);
                        sets.add(sb.toString());
                        result[i]=sb.toString();
                    }
                    
                          /*
                        
                         if (buffCnt == 0) {
                break;
            }
            while (offset < n && buffOffset < buffCnt) {
                buf[offset++] = buff[buffOffset++];
            }
            */
                    
                    else
                    {
                        int incr=1;
                        StringBuilder sb=new StringBuilder(name);
                        sb.append('(').append(incr).append(')');
                        
                        // loop 
                        
                              /*
                        
                         if (buffCnt == 0) {
                break;
            }
            while (offset < n && buffOffset < buffCnt) {
                buf[offset++] = buff[buffOffset++];
            }
            */
                        while (sets.contains(sb.toString()))
                        {
                            incr+=1;
                            sb=new StringBuilder(name);
                            sb.append('(').append(incr).append(')');
                        }
                        
                              /*
                        
                         if (buffCnt == 0) {
                break;
            }
            while (offset < n && buffOffset < buffCnt) {
                buf[offset++] = buff[buffOffset++];
            }
            */
                        
                        curMin.put(name,incr);
                        sets.add(sb.toString());
                        result[i]=sb.toString();
                    }
                }
            
            else
            {
                
                //e xe 
                
                    sets.add(name);
                    result[i]=name;

                }
            
            // end
             
            }
        
        // e3xit
        
        return result;
    }
    
    // end
}
// e3nd