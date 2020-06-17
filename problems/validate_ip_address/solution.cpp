class Solution {
public:
    void tokenize(string const &str, const char delim, vector<string> &out)
    {
        
        stringstream ss(str);

        string s;
        while (getline(ss, s, delim)) {
            out.push_back(s);
        }
    }
    bool checkIPV4(string &IP, vector<string>&a)
    {
        if(IP[0] == '.' || IP[IP.length()-1] == '.')    return false;
        if(a.size() != 4)   return false;
        for(auto &word: a)
        {
            if(word == "" || word.length()>3)  return false;
            if(word.length()>=2 && word[0]=='0') return false;
            for(auto &w: word)
            {
                if(!(w>='0' && w<='9')) return false;
            }
            int part = stoi(word);
            if(part<0 || part > 255) return false;
        }
        return true;
    }
    bool checkIPV6(string &IP, vector<string>&a)
    {
        if(IP[0] == ':' || IP[IP.length()-1] == ':')    return false;
        if(a.size() != 8)   return false;
        for(auto &word: a)
        {
            if(word == "" || word.length()>4)   return false;
            for(auto &w: word)
            {
                if(!((w>='0' && w<='9') || (w>='a' && w<='f') || (w>='A' && w<='F')))   return false;
            }
        }
        
        return true;
    }
    string validIPAddress(string IP) {
        
        int n = IP.length();
        if(n == 0)  return "Neither";
        vector<string>split_ip4;
        vector<string>split_ip6;
        
        tokenize(IP,'.',split_ip4);
        tokenize(IP,':',split_ip6);
        
        // cout<<split_ip6.size()<<endl;
        // for(auto x: split_ip6)  cout<<x<<" ";
        if(split_ip6.size() == 1 && checkIPV4(IP, split_ip4)) return "IPv4";
        
        if(split_ip4.size() == 1 && checkIPV6(IP, split_ip6)) return "IPv6";
        
        
        return "Neither";
    }
};