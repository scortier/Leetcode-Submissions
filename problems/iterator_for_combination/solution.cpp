class CombinationIterator {
public:
    CombinationIterator(string s, int len) {
        string tmp = "";
        getAll(s, len, 0, tmp);
    }

    void getAll(string s, int len, int start, string tmp){
        if(len == 0){
            res.push(tmp);
            return ;
        }
        int l = s.size();
        for(int i=start; i<=l-len; i++){
            tmp += s[i];
            getAll(s, len-1, i+1, tmp);
            tmp.pop_back();
        }
    }

    string next() {
        string t = res.top();
        res.pop();
        return t;
    }

    bool hasNext() {
        return !res.empty();
    }
private:
    priority_queue<string, vector<string>, greater<string>> res;
};