class Solution {
public:
    

    int leastInterval(vector<char>& tasks, int n) {
        int h[26];
        memset(h,0,sizeof(h));
        for(int i = 0 ; i < tasks.size() ; i++)
        {
            h[tasks[i]-'A']++;
        }
        
        sort(h,h+26);
        int slots = h[25]-1;
        int total_slots = slots*n;
        
        for(int i = 24 ; i >= 0 ; i--)
        {
            total_slots = total_slots - min(slots,h[i]);
        }
        return total_slots > 0 ? (tasks.size()+total_slots) : tasks.size();
        
        
        
    }
};
