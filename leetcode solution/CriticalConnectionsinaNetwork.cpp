/*
~ Problem   : 1192. Critical Connections in a Network
~ Link      : https://leetcode.com/problems/critical-connections-in-a-network/
*/

class Solution {
private:
    vector<vector<int>> adj;
    vector<vector<int>> bridges;
    vector<bool> visited;
    vector<int> discTime;
    vector<int> lowTime;
    vector<int> parent;
    int time = 0;

    void criticalConnectionsUtil(int u) {

        visited[u] = true;
        discTime[u] = lowTime[u] = time++;

        for (int i = 0; i < adj[u].size(); ++i) {

            int v = adj[u][i];

            if (!visited[v]) {

                parent[v] = u;

                criticalConnectionsUtil(v);

                lowTime[u] = min(lowTime[u], lowTime[v]);

                if (lowTime[v] > discTime[u])
                    bridges.push_back({u, v});
            }
            else if (v != parent[u])
                lowTime[u] = min(lowTime[u], discTime[v]);
        }
    }

public:
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {

        adj.resize(n);
        visited.resize(n, false);
        discTime.resize(n, -1);
        lowTime.resize(n, -1);
        parent.resize(n, -1);

        for (auto &edge : connections) {
				adj[edge[0]].push_back(edge[1]);
				adj[edge[1]].push_back(edge[0]);
		}

        for (int i = 0; i < n; ++i) {
            if (!visited[i])
                criticalConnectionsUtil(i);
        }

        return bridges;
    }
};
