class Solution {
public:
 
       vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for(int i = 0; i < n; i++){
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            int l = i + 1, r = n - 1;
            while(l < r){
                int cur_sum = nums[i] + nums[l] + nums[r];
                if(cur_sum > 0) r--;
                else if(cur_sum < 0) l++;
                else{
                    res.push_back({nums[i], nums[l], nums[r]});
                    while(l + 1 < n && nums[l] == nums[l + 1]) l++;
                    while(r - 1 > 0 && nums[r] == nums[r - 1]) r--;
                    l++;
                    r--;
                }
            }
        }
        return res;
    
    }
};
