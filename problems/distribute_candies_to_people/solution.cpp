class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> ans(num_people, 0);
        int i = 0;
        while (candies > 0) {
            ans[i % num_people] += i + 1;
            candies -= i + 1;
            ++i;
        }

        if (candies < 0) { //Fix for giving too many candies to last person
            ans[(i - 1) % num_people] += candies;
        }

        return ans;
    }
};