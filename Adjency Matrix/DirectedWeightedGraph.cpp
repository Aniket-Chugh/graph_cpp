#include <iostream>
#include <vector>
using namespace std;
// Adjancy Matrix
// Directed Weighted graph

int main()
{
    int vertex, edges;
    cin >> vertex >> edges;

    vector<vector<int>> AddMat(vertex, vector<int>(vertex, 0));

    int u, v, weight;

    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v >> weight;
        AddMat[u][v] = weight;
    }

    for (int i = 0; i < vertex; i++)
    {
        for (int j = 0; j < vertex; j++)
            cout << AddMat[i][j] << " ";
        cout << endl;
    }
}
