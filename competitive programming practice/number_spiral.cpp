#include <iostream>
#include <algorithm>

using namespace std;

void solve()
{
    long long y, x;
    cin >> y >> x;

    long long m = max(y, x);

    if (m % 2 == 1)
    {
        if (x == m)
        {
            cout << (m * m) - y + 1 << "\n";
        }
        else
        {
            cout << (m - 1) * (m - 1) + x << "\n";
        }
    }
    else
    {
        if (y == m)
        {
            cout << (m * m) - x + 1 << "\n";
        }
        else
        {
            cout << (m - 1) * (m - 1) + y << "\n";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t)
    {
        while (t--)
        {
            solve();
        }
    }

    return 0;
}