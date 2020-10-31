// https://leetcode.com/problems/course-schedule/
class Solution {
vector <vector <int>> g;
vector <int> vis;
vector <bool> ans;
public:
    bool dfs(int ind) {
        vis[ind] = 1;
        for(auto x:g[ind]) {
            if(vis[x]==0) {
                if(!dfs(x)) return false;
            } else if(vis[x]==1) {
                return false;
            }
        }
        vis[ind] = 2;
        return true;
    }
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        g.assign(n+1,vector <int> ());
        vis.resize(n+1,0);
        for(auto x:prerequisites) {
            g[x[1]].push_back(x[0]);
        }
        for(int i=1;i<=n;i++) {
            if(vis[i]==0){
                ans.push_back(dfs(i));
            }
        }
        bool res = true;
        for(auto x:ans) res = res&x;
        return res;
    }
};
