#include <iostream>
#include <vector>
using namespace std;
// Adjancy Matrix
// unDirected unWeighted graph

int main()
{
    int vertex, edges;
    cin >> vertex >> edges;

    vector<vector<bool>> AddMat(vertex, vector<bool>(vertex, 0));

    int u, v;

    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v;
        AddMat[u][v] = 1;
        AddMat[v][u] = 1;
    }

    for (int i = 0; i < vertex; i++)
    {
        for (int j = 0; j < vertex; j++)
            cout << AddMat[i][j] << " ";
        cout << endl;
    }
}
