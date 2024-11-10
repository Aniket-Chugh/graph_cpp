#include <iostream>
#include <vector>
using namespace std;

void DFS(int node, vector<int> adj[], vector<int> &ans, vector<bool> &visited)
{
    visited[node] = 1;
    ans.push_back(node);
    for (int j = 0; j < adj[node].size(); j++)
    {
        if (!visited[adj[node][j]])
        {
            DFS(adj[node][j], adj, ans, visited);
        }
    }
}

vector<int> dfsTra(int V, vector<int> adj[])
{
    vector<bool> visited(V, 0);
    vector<int> ans;
    DFS(0, adj, ans, visited);
    return ans;
}

int main()
{
    int V, E;
    cin >> V >> E;
    vector<int> adj[V];
    int u, v;

    // Use E as the loop counter for edges
    for (int i = 0; i < E; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> dfstra = dfsTra(V, adj);

    for (int i = 0; i < dfstra.size(); i++)
    {
        cout << dfstra[i] << " ";
    }
    cout << endl;

    return 0;
}
