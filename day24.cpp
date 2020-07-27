class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> res;
        
        queue<vector<int>> q;
        
        q.push({0});
        while(!q.empty())
        {
            vector<int> t = q.front();
            q.pop();
            
            if(t[t.size()-1] == graph.size()-1)
            {
                res.push_back(t);
            }
            else
            {
                vector<int> neighbours = graph[t[t.size()-1]];
                for(int i = 0; i < neighbours.size() ; i++)
                {
                    vector<int> tmp = t;
                    tmp.push_back(neighbours[i]);
                    q.push(tmp);
                }
            }
        }
        return res;
        
    }
};
