class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t l = 0;
        uint32_t r = n;
        int x = 32;
        while(x)
        {
           x--;
           l <<= 1;
        l = l | (r&1);
            r >>= 1;
            
        }
        return l;
    }
};
