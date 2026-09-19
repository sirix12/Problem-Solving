#include <bits/stdc++.h>
#include <iostream>

using namespace std;

long long findMissingNumber(long long n, const vector<long long> &numbers)
{
    long long total_sum = n * (n + 1) / 2;

    long long actual_sum = 0;
    for (long long num : numbers)
    {
        actual_sum += num;
    }

    return total_sum - actual_sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    if (!(cin >> n))
        return 0;

    vector<long long> numbers(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> numbers[i];
    }

    long long missing = findMissingNumber(n, numbers);

    cout << missing << "\n";

    return 0;
}