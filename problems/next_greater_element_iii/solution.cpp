class Solution {
public:
    int nextGreaterElement(int n) {
        string s=to_string(n);
        int i=s.size()-2;
        while(i>=0&&s[i]>=s[i+1]){
            --i;
        }
        if(i>=0){
            int j=s.size()-1;
            while(j>=0&&s[i]>=s[j]){
                --j;
            }
            swap(s[i],s[j]);
            reverse(s.begin()+i+1,s.end());
            return stoll(s)>INT_MAX? -1:stoi(s); 
        }
        return -1;
    }
};