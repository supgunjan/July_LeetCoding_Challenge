class Solution {
public:
    double myPow(double x, long long  n) {
        if(n < 0)
        {
            x = 1/x;
            n *= -1;
        }
        double i = 1;
        while(n)
        {
            if(n%2)
            {
                i *= x;
                n--;
            }
            else
            {
                x *= x;
                n >>= 1;
                
            }
        }
        return i;
        
    }
};
