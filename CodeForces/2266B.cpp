// https://codeforces.com/contest/2266/problem/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Number of test cases
    int t;
    cin >> t;

    while (t--)
    {
        // Initial stones of Alice, Bob and third pile
        long long a, b, c;
        cin >> a >> b >> c;

        // Score if Alice doesn't take from the third pile
        long long score1 = abs(a - b);

        // Score if Alice takes all stones from third pile
        long long score2 = abs(a + c - b);

        // maximum score
        long long answer = max(score1, score2);

        cout << answer << endl;
    }

    return 0;
}