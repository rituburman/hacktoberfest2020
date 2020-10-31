#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<vector<pair<int,int>>> graph(7);
    graph[1].push_back({3,4});
    graph[1].push_back({2,4});
    graph[2].push_back({1,4});
    graph[2].push_back({3,2});
    graph[3].push_back({1,4});
    graph[3].push_back({2,2});
    graph[3].push_back({4,3});
    graph[3].push_back({5,4});
    graph[3].push_back({6,2});
    graph[4].push_back({3,3});
    graph[4].push_back({5,3});
    graph[5].push_back({3,4});
    graph[5].push_back({4,3});
    graph[5].push_back({5,3});
    graph[6].push_back({3,2});
    graph[6].push_back({5,3});

    vector<int> vis(7,0);
    vis[1]=1;
    int tot_edges=0;
    while(tot_edges<graph.size()-2){
        int min = INT_MAX,x = 1,y = 1;
        for(int i = 1; i < vis.size(); i++) {
            if (vis[i]){
                for (auto it : graph[i]) {
                    if (!vis[it.first]) {
                        if (min>it.second) {
                            min = it.second;
                            x = i;
                            y = it.first;
                        }
                    }
                }
            }
        }
       cout << x <<  " -> " << y << " :  " << min;
       cout << endl;
       vis[y] = true;
       tot_edges++;
    }
}
