#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int vertex, edges;

    cin >> vertex >> edges;

    vector<pair<int, int>> AddList[vertex];

    int u, v, weight;
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v >> weight;
        AddList[u].push_back(make_pair(v, weight));
        AddList[v].push_back(make_pair(u, weight));
    }

    // Print the adjacency list
    for (int i = 0; i < vertex; i++)
    {
        cout << i << " -> ";
        for (int j = 0; j < AddList[i].size(); j++)
        {
            cout << "(" << AddList[i][j].first << ", " << AddList[i][j].second << ") ";
        }
        cout << endl;
    }

    return 0;
}
