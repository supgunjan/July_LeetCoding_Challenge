class Solution {
public:
    int hammingDistance(int x, int y) {
        int a = x^y;
        int cnt = 0;
        while(a)
        {
            if(a&1) cnt++;
            a >>= 1;
        }
        return cnt;
        
    }
};
