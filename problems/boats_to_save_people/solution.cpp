class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int n = people.size();
        int ans = 0;
        int left = 0;
        int right = n - 1;

        while (left <= right){
            ans++;
            if (left != right){
                int heaviest = people[right];
                int lightest = people[left];

                if (lightest + heaviest > limit){
                    right--;
                }

                else{
                    left++;
                    right--;
                }
            }

            else{
                break;
            }
        }
        return ans;
    }
}; 