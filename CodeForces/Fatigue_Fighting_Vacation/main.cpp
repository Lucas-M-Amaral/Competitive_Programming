/*

**** Here Follows the link to the problem: ****

    https://codeforces.com/gym/104555/problem/F

*/

#include <iostream>
#include <queue>

#define fastio ios_base::sync_with_stdio(false);

const int MAX = 1e5;

using namespace std;

void solve()
{

    int d, c, r, countAct = 0; // d = disposition; c = tiring activities; r = invigorating activities;
    cin >> d >> c >> r;

    queue<int> tiring, invi;

    for (int i = 0; i < c; i++)
    {
        int n;
        cin >> n;
        tiring.push(n);
    }

    for (int i = 0; i < r; i++)
    {
        int n;
        cin >> n;
        invi.push(n);
    }

    while (true)
    {
        if (!tiring.empty() && d >= tiring.front())
        {
            d -= tiring.front();
            tiring.pop();
            countAct++;
        }
        else if (!invi.empty())
        {
            d += invi.front();
            invi.pop();
            countAct++;
        }
        else
        {
            break;
        }
    }
    cout << countAct << endl;
}

int main()
{
    fastio;
    solve();
    return 0;
}