class Solution {
public:
    vector<int> countBits(int num) {

        vector<int> cbits(num+1);
        cbits[0] = 0;
        for(int i = 1; i<= num; i++){
            if ((i & 0x1)){
                cbits[i] = cbits[i/2] + 1;
            } else {
                cbits[i] = cbits[i/2];
            }
        }
        return cbits;
    }
};