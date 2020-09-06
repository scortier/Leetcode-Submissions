class Solution {
public:
    int largestOverlap(vector<vector<int>>& A, vector<vector<int>>& B) {
        return std::max(check(A, B), check(B, A));
    }
    int check(std::vector<std::vector<int>>& A, std::vector<std::vector<int>>& B) {
        int R{(int)A.size()}, C{(int)A[0].size()}, max_{0};
        for(int i{R-1}; i >= 0; --i) {
            for(int j{C-1}; j >= 0; --j) {
                if((i+1)*(j+1) <= max_) continue;
                int count{0};
                for(int k{R-1}, kk{i}; kk >= 0; --k, --kk)
                    for(int l{C-1}, ll{j}; ll >= 0; --l, --ll)
                        count += A[kk][ll]&B[k][l];
                
                max_ = std::max(max_, count);
            }
        }
        return max_;
    }
};