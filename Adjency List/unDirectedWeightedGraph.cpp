#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int vertex, edges;
    cin >> vertex >> edges;

    vector<int> AddList[vertex];
    int u, v;

    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v;
        AddList[u].push_back(v);
        AddList[v].push_back(u);
    }

    // print the list

    for (int i = 0; i < vertex; i++)
    {
        cout << i << "->";
        for (int j = 0; j < AddList[i].size(); j++)
        {
            cout << AddList[i][j] << " ";
        }
    }
}
