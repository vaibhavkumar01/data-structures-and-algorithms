// https://codeforces.com/contest/2276/problem/A
// Perfect Sandwiches

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int t;
    cin >> t;

    while(t--)
    {
        int a, b;
        cin >> a >> b;

        // Impossible Condition
        if(a <= b)
        {
            cout << -1 << '\n';
            continue;
        }

        // Calculate the maximum number of Sandwiches
        int k = min(b, a - b);
    
        cout << k << '\n';
    }
    return 0;
}