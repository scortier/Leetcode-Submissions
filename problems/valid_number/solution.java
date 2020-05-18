public class Solution {


    
    public boolean isNumber(String s) {
        if(s == null || s.length() == 0){
            return false;
        }
        boolean numSeen = false;
        boolean dotSeen = false;
        boolean eSeen = false;
        char[] ca = s.trim().toCharArray();
        for (int i = 0; i < ca.length; i++) {
            if('0' <= ca[i] && ca[i] <= '9'){
                numSeen = true;
            }else if(ca[i] == '.') {
                if(dotSeen || eSeen){
                    return false;
                }
                dotSeen = true;
            }else if(ca[i] == 'e' || ca[i] == 'E'){
                if(eSeen || !numSeen){
                    return false;
                }
                eSeen = true;
                numSeen = false; // 重新算数字
            }else if(ca[i] == '+' || ca[i] == '-'){
                if(i != 0 && ca[i-1] != 'E' && ca[i-1] != 'e'){
                    return false;
                }
            }else {
                return false;
            }
        }
        return numSeen;
    }

}