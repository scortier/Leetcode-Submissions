class StockSpanner {
public:
    vector <int> val, idx;
    int count;
    
    StockSpanner() {
        count = -1;
    }
    
    int next(int price) {
        ++count;
        if (val.size() == 0){
            val.push_back(price);
            idx.push_back(count);
            return 1;
        }
        
        while(val.size() != 0 && val.back() <= price){
            val.pop_back();
            idx.pop_back();
        }
        val.push_back(price);
        idx.push_back(count);
        
        return (idx.size() > 1) ? count - idx[idx.size() - 2] : count + 1;
    }
};

static auto speedup = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();