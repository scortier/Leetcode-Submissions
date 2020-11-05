class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int even = 0;
        int odd = 0;
        for(auto& num : position){
            if(num%2 == 0) ++even;
            else ++odd;
        }

        return min(even, odd);
    }
}; 