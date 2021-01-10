class Solution {
public:
    int totalMoney(int n) {
        int res= 0;
        for(int start = 1;n>0;start++){
        for(int i =0;i<7&&n>0;i++){
            res+=(start+i);
            n--;
        }
    }
       return res; 
    }
};