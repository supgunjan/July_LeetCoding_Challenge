class Solution {
public:
    
    static bool comp(pair<int,int> m1, pair<int,int> m2)
    {
        return (m1.second > m2.second ? true : false);
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        unordered_map<int,int> m;
        for(int i = 0 ; i < nums.size(); i++)
        {
            
            m[nums[i]]++;
        }
     vector<pair<int,int>> tmp(m.begin(),m.end());
        sort(tmp.begin(),tmp.end(),comp);
        
       for(auto i : tmp)
       {
          res.push_back(i.first);
           k--;
           if(k == 0) break;
       }
        return res;
    }
};
