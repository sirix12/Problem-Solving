#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int repetition(string sequence)
{
    unordered_map<char, int> counts;
    for (int i = 0; i < sequence.length(); i++)
    {
        counts[sequence[i]]++;
    }

    pair<string, int> highest = {"", 0};

    for (const auto &pair : counts)
    {
        if (pair.second > highest.second)
        {
            highest = pair;
        }
    }
    return highest.second;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string sequence;

    cout << "enter sequence: ";
    cin >> sequence;
    cout << repetition(sequence);
}