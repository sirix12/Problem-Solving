#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

long long count_moves(const vector<long long> &numbers, long long n)
{
    long long prev = numbers[0];
    long long count = 0;
    for (int i = 1; i < n; i++)
    {
        if (prev > numbers[i])
        {
            count += prev - numbers[i];
        }
        else
        {
            prev = numbers[i];
        }
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    vector<long long> numbers(n);
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    cout << count_moves(numbers, n) << "\n";
    return 0;
}