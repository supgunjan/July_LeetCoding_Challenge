class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int diff = accumulate(nums.begin(),nums.end(),0,bit_xor<int>());
        cout<<diff<<endl;
        
        int mask = diff & ~(diff-1);
        int x = 0,y = 0;
        
        for(int i : nums)
        {
            if(mask & i) x ^= i;
            else y ^= i;
        }
    
        
        return{x,y};
    }
};
