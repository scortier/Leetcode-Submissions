class Solution {
public:
     string intToRoman(int num)
    {       
        string res = "";
        string s[] = {"I", "X", "C", "M", "V", "L", "D", ""};
        int i = 0;
        while (num)
        {
            switch(num % 10)
            {
                case 1: res.insert(0, s[i]); break;
                case 2: res.insert(0, s[i] + s[i]); break;
                case 3: res.insert(0, s[i] + s[i] + s[i]); break;
                case 4: res.insert(0, s[i] + s[i + 4]); break;
                case 5: res.insert(0, s[i + 4]); break;
                case 6: res.insert(0, s[i + 4] + s[i]); break;
                case 7: res.insert(0, s[i + 4] + s[i] + s[i]); break;
                case 8: res.insert(0, s[i + 4] + s[i] + s[i] + s[i]); break;
                case 9: res.insert(0, s[i] + s[i + 1]); break;  
            }
            num /= 10;
            i++;
        }
        return res;
    }
};