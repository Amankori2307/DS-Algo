/*
    Snake and ladder

    TEST:
        TEST1:
            Input:
                2
                3 90
                56 76
                3
                99 10
                30 20
                20 5
            Output:
                3
*/

#include <iostream>
#include <vector>
#include <map>
#include <queue>
using namespace std;

int main()
{
    int ladders;
    cin >> ladders;
    map<int, int> lad;
    for (int i = 0; i < ladders; i++)
    {
        int u, v;
        cin >> u >> v;
        lad[u] = v;
    }
    int snakes;
    map<int, int> snak;
    cin >> snakes;
    for (int i = 0; i < snakes; i++)
    {
        int u, v;
        cin >> u >> v;
        snak[u] = v;
    }

    int moves = 0;
    vector<bool> vis(101, false);
    queue<int> q;
    bool found = false;
    q.push(1);

    while (!q.empty() && !found)
    {
        int size = q.size();
        while (size--)
        {
            int curr = q.front();
            q.pop();
            for (int d = 1; d <= 6; d++)
            {
                if (curr + d == 100)
                {
                    found = true;
                }
                else if (curr + d < 100 && snak[curr + d] && !vis[snak[curr + d]])
                {
                    vis[snak[curr + d]] = true;
                    if (snak[curr + d] == 100)
                        found = true;
                    q.push(snak[curr + d]);
                }
                else if (curr + d < 100 && lad[curr + d] && !vis[lad[curr + d]])
                {
                    vis[lad[curr + d]] = true;
                    if (lad[curr + d] == 100)
                        found = true;
                    q.push(lad[curr + d]);
                }
                else if (curr + d < 100 && !vis[curr + d] && !snak[curr + d] && !lad[curr + d])
                {
                    vis[curr + d] = true;
                    q.push(curr + d);
                }
            }
        }
        moves++;
    }

    if (found)
    {
        cout << moves << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
}
