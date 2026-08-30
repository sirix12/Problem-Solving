#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int s, v1, v2, t1, t2;
    if (!(cin >> s >> v1 >> v2 >> t1 >> t2))
        return 0;
    int first = s * v1 + 2 * t1;
    int second = s * v2 + 2 * t2;

    if (first < second)
    {
        cout << "First\n";
    }
    else if (first > second)
    {
        cout << "Second\n";
    }
    else
    {
        cout << "Friendship\n";
    }

    return 0;
}
