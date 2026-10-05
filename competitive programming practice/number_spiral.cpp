#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cout << "insert t :" << endl;
    cin >> t;
    int count = 0;
    int x;
    int y;
    cin >> x;
    cin >> y;

    int n_max = max(x, y);
    int n_min = min(x, y);

    if (n_max % 2 == 0)
    {
        if (n_max == x)
        {
            cout << ((x * x) - (x - y + 1)) << endl;
        }
        else
        {
            cout << (((n_max * n_max) / 2) + 2 + x) << endl;
        }
    }
    else
    {
        cout << (n_max * n_max) + n_min << endl;
    }
}