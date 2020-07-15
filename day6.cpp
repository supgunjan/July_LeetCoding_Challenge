class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry  = 1;
        int n = digits.size();
        for(int i = n-1 ; i  >= 0 ; i--)
        {
            if(digits[i]+carry > 9)
            {
                digits[i] = 0;
                carry = 1;
            }
            else
            {
                digits[i] += carry;
                carry = 0;
            }
        }
        vector<int> res;
        if(carry)
        res.push_back(carry);
        for(int i = 0; i < n ; i++)
        {
            res.push_back(digits[i]);
        }
        return res;
    }
};
