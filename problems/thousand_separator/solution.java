class Solution {
    public String thousandSeparator(int n) {
        
        // new str
        
        String s = String.valueOf(n);
        
        // func()
        
        StringBuilder sb = new StringBuilder();
        // init
        
        int bits = 0;
        
        // logic 
        
        for (int i = s.length() - 1; i >= 0; i--) {
            
            // appending out
            
            sb.append(s.charAt(i));
            // increase by 1
            
            bits++;
            if (bits % 3 == 0) sb.append('.');
        }
        
        // reverse sorting out
        
        String s1 = sb.reverse().toString();
        // exit
        
        return s1.charAt(0) == '.' ? s1.substring(1, s1.length()) : s1;
    }


}