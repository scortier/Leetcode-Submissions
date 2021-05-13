class Solution{
public:
    vector<string> ambiguousCoordinates(string S){
        vector<string> res;
        S = S.substr(1, S.size() - 2); int n = S.size();
        for(int i = 1; i < n; i++){
            string str1 = S.substr(0, i), str2 = S.substr(i, n - i);
            vector<string> l1 = getValid(str1), l2 = getValid(str2);
            for(auto& ele1:l1){
                for(auto& ele2:l2){
                    res.push_back("(" + ele1 + ", " + ele2 + ")");
                }
            }
        }
        return res;
    }
    vector<string> getValid(string& s){
        vector<string> res; int n = s.size();
        for(int i = 1; i <= n; i++){
            string left = s.substr(0, i), right = s.substr(i, n - i);
            if( (left.front() != '0' || left == "0") && right.back() != '0'){
                res.push_back(left + (i == n ? "" : ".") + right);
            }
        }
        return res;
    }
};