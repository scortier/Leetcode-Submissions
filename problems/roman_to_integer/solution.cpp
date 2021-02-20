class Solution {
public:
    int romanToInt(string s) {
         int res=0;
        map<char, int> roman_int{{'I', 1},{'V', 5},{'X', 10},{'L', 50},{'C', 100}, {'D', 500},{'M', 1000}};
        int roman_length=s.size();
        for(int i=0;i<roman_length;i++){
            int num=roman_int[s[i]];
            if(num==0)
                return 0;
            int next=i+1;
            if(next<roman_length && roman_int[s[i]]<roman_int[s[next]]){
                int num2=roman_int[s[next]];
                if(num2==0)
                    return 0;
                num=num2-num;
                i++;
            }
            res+=num;
        }
        return res;
    }
};