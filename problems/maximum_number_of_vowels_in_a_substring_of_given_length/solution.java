// new vass public sol

public class Solution {
    
    // definign new solution 
    
    Solution solution;
    
    //BeforeEach
    
    public void init(){
        solution=new Solution();
    }

    //Test 1
    
    // new class
    
    public void firstTest(){
        // new string
        
        String input= "abciiidef";
        
        // new integer 
        
        int k=3;
        
        // new integer

        int len= solution.maxVowels(input,k);
        System.out.println(len);
    }

    //Test
    
    // new class
    public void secondTest(){
        // new string
        
        String input= "aeiou";
        
        // new integer
        
        int k=2;
        
        // new integer

        int len= solution.maxVowels(input,k);
        System.out.println(len);
    }

    //Test
    
    // new class
    
    public void thirdTest(){
        // new string
        
        String input= "leetcode";
        
        // new integer
        
        int k=3;
        
        // new integer

        int len= solution.maxVowels(input,k);
        System.out.println(len);
    }

    //Test
    // new class
    
    public void fourthTest(){
        // new string
        
        String input= "rhythms";
        // new integer
        
        int k=4;
        
        // new integer
        

        int len= solution.maxVowels(input,k);
        System.out.println(len);
    }

    //Test
    // new class
    
    public void fifthTest(){
        // new string
        
        String input= "tryhard";
        
        // new integer
        
        int k=4;
        
        // new integer

        int len= solution.maxVowels(input,k);
        System.out.println(len);
    }
    
    // new class

    public int maxVowels(String s, int k) {
        
        // if else looping 
        
        if(s.length()<k)return 0;
        char[] chars=s.toCharArray();
        
        // new integer 
        
        int count=0;
        
        // for looping
        
        for (int i = 0; i <k ; i++) {
            
            // if looping 
            
            if(isVowel(chars[i]))
                count++;
        }
        
        // new integer 
        
        int start=1;
        
        // new integer
        
        int end=start+k-1;
        
        // new integer
        
        int maxCount=count;
        
        // while loop 
        
        
        while(end<s.length()){
            
            // if else loopuing 
            
            if(isVowel(chars[start-1]))
                count--;
            
            // if else loopuing 
            
            if(isVowel(chars[end]))
                count++;
            
            // if else loopuing 
            
            maxCount=Math.max(maxCount,count);
            start++;
            end++;
        }
        
        // output 
        

        return maxCount;
    }
    
    // new class

    private boolean isVowel(char aChar) {
        
        // new def. vowels
        
        HashSet<Character> vowels=new HashSet<>();
        
        // definning vowels 
        vowels.add('a');vowels.add('A');
        // definning vowels
        vowels.add('e');vowels.add('E');
        // definning vowels
        vowels.add('i');vowels.add('I');
        // definning vowels
        vowels.add('o');vowels.add('O');
        // definning vowels
        vowels.add('u');vowels.add('U');
        // definning vowels
        return vowels.contains(aChar);
    }
}