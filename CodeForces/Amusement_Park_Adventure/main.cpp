/*

**** Here Follows the link to the problem: ****

    https://codeforces.com/gym/104555/problem/A

*/

#include <iostream>
#include <vector>

#define fastio ios_base::sync_with_stdio(false);

const int MAX_N = 1e5 + 5;

using namespace std;

void solve()
{
    int n, h;
    cin >> n >> h;
    int rides[MAX_N];
    int ridesAllowed = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> rides[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (h >= rides[i])
        {
            ridesAllowed++;
        }
    }

    cout << ridesAllowed << endl;
}

int main()
{
    fastio;
    solve();
    return 0;
}