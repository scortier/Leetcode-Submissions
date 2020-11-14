class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int T = minutesToTest/minutesToDie;
        int pigs = (ceil)(log(buckets)/log(T+1));
        return pigs;
    }
};