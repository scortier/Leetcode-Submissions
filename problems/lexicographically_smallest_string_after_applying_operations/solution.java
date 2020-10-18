// Importing CP Pkg

import java.math.BigDecimal;

// ints pkg 

import java.math.BigInteger;
// hashset

import java.util.HashSet;
// set pkg 

import java.util.Set;

// map pkg 

import java.util.concurrent.ConcurrentSkipListMap;


// main class solution 

class Solution {
    Set<String> set;
    String minString;

    public String findLexSmallestString(String s, int a, int b) {
        set = new HashSet<>();
        minString = s;
        set.add(s);
        
        // dfs 1
        dfs(s, a, b, 1);
        // dfs 2
        dfs(s, a, b, 2);
        return minString;
    }

    
    // dfs 1 
    public void dfs(String s, int a, int b, int op) {
        
        // temp string 
        
        String temp;
        
        // logical execution 
        
        if (op == 1)
            temp = op1(s, a);
        else
            temp = op2(s, b);
        if(set.contains(temp))
            return;
        set.add(temp);
        
        // BigInts pkg exe
        
        BigInteger b1 = new BigInteger(temp);
        BigInteger b2 = new BigInteger(minString);
        if(b1.compareTo(b2)<0)
            minString=temp;
        
        // dfs 1 dfs 2 
        
        dfs(temp, a, b, 1);
        dfs(temp, a, b, 2);
    }

    
    // OP 1 
    

    public String op1(String s, int a) {
        char[] chars = s.toCharArray();
        for (int i = 0; i < s.length() / 2; i++) {
            // char temp and exe 
            
            int temp = Integer.parseInt(String.valueOf(chars[2 * i + 1])) + a;
            
            // adding 
                
            chars[2 * i + 1] = temp > 9 ? (char) ('0' + temp-10) : (char) ('0' + temp);
        }
        return String.valueOf(chars);
    }
    
    // OP 2 
    
    public String op2(String s, int b) {
        
        // string manipulation 
        
        StringBuilder stringBuilder = new StringBuilder();
        
        // printing out 
        
        stringBuilder.append(s.substring(s.length() - b));
        stringBuilder.append(s, 0, s.length()- b);
        
        // exit 
        
        return stringBuilder.toString();
    }
    
    // end
} 

// end 
