class Solution {
public:
    int const dx[4] = { 0, 1, 0, -1 };
    int const dy[4] = { -1, 0, 1, 0 };
    bool isRobotBounded(string instructions) {
        int n = (int)instructions.size();

        int x = 0;
        int y = 0;
        int d = 0;
        for (int i = 0; i < n; ++i)
        {
            if (instructions[i] == 'G')
            {
                x += dx[d];
                y += dy[d];
            }
            else if (instructions[i] == 'L')
                d = (d + 3) & 3;
            else
                d = (d + 1) & 3;
        }

        if ((x == 0 && y == 0) || d != 0)
            return true;
        return false;
    }
}; 