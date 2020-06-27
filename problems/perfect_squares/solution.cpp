class Solution {
public:
    bool isSquare(int n)
    {
        return ceil(sqrt(n)) == floor(sqrt(n));
    }

    int numSquares(int n) {

        if(isSquare(n))
            return 1;

        while(n%4 == 0)
            n = n/4;

        if(n%8 == 7)
            return 4;

        for(int i=1; i<=sqrt(n); i++)
            if(isSquare(n - i*i))
                return 2;

        return 3;
    }
}; 