#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// BFS Traversal function
vector<int> BfsTraversal(int V, vector<int> adj[])
{
    queue<int> q;
    vector<bool> visited(V, 0);
    q.push(0);
    visited[0] = 1;
    vector<int> ans;

    int node;

    while (!q.empty())
    {
        node = q.front();
        q.pop();

        ans.push_back(node);

        for (int j = 0; j < adj[node].size(); j++)
        {
            if (!visited[adj[node][j]])
            {
                visited[adj[node][j]] = 1;
                q.push(adj[node][j]);
            }
        }
    }
    return ans;
}

int main()
{
    int V, E; // Number of vertices and edges
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    // Adjacency list representation
    vector<int> adj[V];

    cout << "Enter each edge as two vertex indices (e.g., 0 1 for an edge between vertex 0 and 1):" << endl;
    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // Assuming an undirected graph
    }

    // Perform BFS traversal from node 0
    vector<int> bfsResult = BfsTraversal(V, adj);

    // Output the BFS traversal result
    cout << "BFS Traversal starting from node 0: ";
    for (int i = 0; i < bfsResult.size(); i++)
    {
        cout << bfsResult[i] << " ";
    }
    cout << endl;

    return 0;
}
