class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<= 0)
            return false;
        
        bool bit_found = false;
        
        for (int i = 0; i < 32; ++i) {
            if ((n & (1 << i)) != 0) {
                if (bit_found) {
                    return false;
                }
                bit_found = true;
            }
        }

        return bit_found;
        
    }
};