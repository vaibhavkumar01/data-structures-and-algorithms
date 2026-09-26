// https://codeforces.com/problemset/problem/231/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    int answer = 0;

    for(int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if(a + b + c >= 2)
        {
            answer++;
        }
    }

    cout << answer << '\n';

    return 0;
}