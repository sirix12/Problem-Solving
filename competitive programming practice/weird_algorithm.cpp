#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void weird_algorithm(int n)
{
    cout << n << "-->";
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
            cout << n << "-->";
        }
        else
        {
            n *= 3;
            n += 1;
            cout << n << "-->";
        }
    }
    cout << endl;
}

int main()
{
    weird_algorithm(3);
}
