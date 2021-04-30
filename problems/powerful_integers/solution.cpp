class Solution 
{
public:
    vector<int> powerfulIntegers(int x, int y, int bound) 
    {
        unordered_set<unsigned int> buf;
        int i = 0;
        int n = 1;
        if (x > 1)
        {
            while (n <= bound)
            {
                i++;
                n *= x;
            }
        }

        int j = 0;
        n = 1;
        if (y > 1)
        {
            while (n <= bound)
            {
                j++;
                n *= y;
            }
        }

        unsigned int a = 1;
        unsigned int b = 1;
        for (int ix = 0; ix <= i; ix++)
        {
            b = 1;
            for (int iy = 0; iy <= j; iy++)
            {
                if (a + b <= bound)
                {
                    buf.insert(a + b);
                }

                b *= y;
            }

            a *= x;
        }

        vector<int> result;
        for (auto it = buf.begin(); it != buf.end(); it++)
        {
            result.push_back(*it);
        }

        return result;
    }
};