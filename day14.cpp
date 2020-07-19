class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hr = ((double)hour*30)+((double)minutes * 0.5);
        double mn = (double)minutes * 6;
        
        double diff = abs(hr-mn);
        if(diff > 180)  return 360-diff;
        else return diff;
        
    }
};
