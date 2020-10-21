class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        int n = asteroids.size();
        if(n == 0)
            return {};
        if(n == 1)
            return {asteroids[0]};
        vector<int> result;
        for(int i = 0; i<n; i++) {
            if(st.empty()) {
                st.push(asteroids[i]);
            } else if(asteroids[i] > 0 || st.top() < 0) {
                st.push(asteroids[i]);
            } else {
                //remove +ve asteroids which are less than -ve asteroid (asteroid[i])
                while(!st.empty() && st.top() > 0 && st.top() < abs(asteroids[i])) {
                    st.pop();
                }
                if(st.empty() || st.top() < 0)
                    st.push(asteroids[i]);
                else if(st.top() == abs(asteroids[i])) //remove if +ve asteroid is equal in magnitude to -ve asteroid
                    st.pop();
            }
        }
        while(!st.empty()) {
            result.push_back(st.top());
            st.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};