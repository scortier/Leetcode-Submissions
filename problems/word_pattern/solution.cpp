class Solution {
public:
    bool wordPattern(string pattern, string str) {
        string temp="";
        unordered_map<string,char> dicti;
        unordered_map<char,string> dicti2;
        int j=0;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]==' ' || i==str.size()-1)
            {
                if(i==str.size()-1)
                    temp+=str[i];
                if(dicti.find(temp)!=dicti.end())
                {
                    if(pattern[j]!=dicti[temp])
                        return false;
                }
                else if(dicti2.find(pattern[j])!=dicti2.end())
                {
                    if(temp!=dicti2[pattern[j]])
                        return false;
                }
                else
                {
                    dicti[temp]=pattern[j];
                    dicti2[pattern[j]]=temp;
                }
                temp="";
                j++;
            }
            else
                temp+=str[i];
        }
        if(j!=pattern.size())
            return false;
        return true;
    }
};