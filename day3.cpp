class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) {
        map<vector<int>,int> m;
        int sz = N;
        vector<vector<int>> res;
        int flag = 0;
        while(N--)
        {
            vector<int> tmp(8,0);
            for(int i = 1 ; i < 7 ; i++)
            {
                if(cells[i-1] == cells[i+1])
                {
                    tmp[i] = 1;
                }
            }
            if(m.count(tmp))
            {
                flag = 1;
                break;
            }
            m[tmp] = 1;
            res.push_back(tmp);
            cells = tmp;
        }
 
        int mod = m.size();
        int x = sz % mod;
        if(x == 0) x = mod;
        return res[x-1];   
    }
};
