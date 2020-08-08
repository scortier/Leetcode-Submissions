class Solution {
public:
    int minInsertions(string s) {
        int result = 0;
        int cnt = 0;
        
        // for loop 
        
        for(int i = 0; i < s.size(); i++){
            char c = s[i];
            if(c == '('){
                cnt++;
            }
            /*
    
               
                if(cnt == 0){
                    if(s[i + 1] == ')'){
                        result++;
                        i++;
                    }else{
                        result+=2;
                    }
                    continue;
          i++;
                }
            }
        }
        
        return result + cnt * 2;
    }
};
*/else{
                if(i + 1 == s.size()){
                    result++;
                    if(cnt == 0){
                        result++;
                    }else{
                        cnt--;
                    }
                    break;
                }
    
    // loop 
    
                
                if(cnt == 0){
                    if(s[i + 1] == ')'){
                        result++;
                        i++;
                    }else{
                        result+=2;
                    }
                    continue;
                }
                
    
    // loop 
    
                char c2 = s[i + 1];
                if(c2 == '('){
                    result++;
                    cnt--;
                }else{
                    cnt--;
                    i++;
                }
            }
        }
        
        // exit
        
        return result + cnt * 2;
    }
};