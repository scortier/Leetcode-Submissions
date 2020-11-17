class Solution {
public:
    int Gcd(int p, int q)
    {
        if (q == 0)
            return p;
        return Gcd(q, p % q);
    }
    int mirrorReflection(int p, int q) {
        int gcd = Gcd(p, q);
        p /= gcd;
        p &= 1;
        q /= gcd;
        q &= 1;
        if (p == 1 && q == 1)
            return 1;
        return (p == 1 ? 0 : 2);
    }
}; 