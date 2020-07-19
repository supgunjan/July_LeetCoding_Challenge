const int N = 1e5 + 1;
class Solution {
public:
    vector<int> yo[N];
    vector<int> course;
    vector<int> res;
    bool cycle(int u){
        course[u] = 1; 
        for(auto child : yo[u]){
            if(course[child] == 1){
                return true;
            }else if(course[child] == 0){
                if(cycle(child)) return true;
            }
        }
        course[u] = 2; 
        res.push_back(u);
        return false;
    }
    vector<int> findOrder(int n, vector<vector<int>>& pre) {
        for(auto edge : pre){
            yo[edge[1]].push_back(edge[0]);
        }
        course.assign(n, 0);
        for(int i = 0; i < n; i++){
            if(course[i] == 0){
                if(cycle(i)) return vector<int>{};
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
