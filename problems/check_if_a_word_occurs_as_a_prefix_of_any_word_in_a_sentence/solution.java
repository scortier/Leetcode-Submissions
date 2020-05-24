// defining classes

public class Solution {
    Solution solution;
    
    //BeforeEach
    
    public void init(){
        // new def.
        
        solution=new Solution();
    }

    // Testing tescases
    
    public void firstTest(){
        // inputs
        
        String input= "this problem is an easy problem";
        String search="pro";

        int len= solution.isPrefixOfWord(input,search);
        System.out.println(len);
    }
    
    // new public class 
    
    public int isPrefixOfWord(String sentence, String searchWord) {
        
        // return -1 if no
        
        int result = -1;
        // new string 
        String[] words = sentence.split(" ");
        
        // for loop
        
        for (int i = 0; i < words.length; i++) {
            
            // if loop
            
            if (words[i].length()>=searchWord.length() && words[i].substring(0,searchWord.length()).equals(searchWord))
                
                // answer  
            
            {
                result = i+1;
                break;
            }
        }
        return result;
    }
}