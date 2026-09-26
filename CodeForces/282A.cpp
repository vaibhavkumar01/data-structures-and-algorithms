// https://codeforces.com/problemset/problem/282/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);

    int n;
    cin >> n;
    int x = 0;
    for(int i = 0; i < n; i++)
    {
        string operation;
        cin >> operation;
        // '+' means increment, '-' means decrement
        if (operation[1] == '+')
            x++;
        else
            x--;
    }
    cout << x << '\n';
    return 0;
}