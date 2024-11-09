#include <iostream>
#include <vector>
using namespace std;
// Adjancy Matrix
// Directed UnWeighted graph

int main()
{
    int vertex, edges;
    cin >> vertex >> edges;

    vector<vector<int>> AddMat(vertex, vector<int>(vertex, 0));

    int u, v;

    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v;
        AddMat[u][v] = 1;
    }

    for (int i = 0; i < vertex; i++)
    {
        for (int j = 0; j < vertex; j++)
            cout << AddMat[i][j] << " ";
        cout << endl;
    }
}
