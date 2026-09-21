// https://codeforces.com/contest/2266/problem/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // number of test cases
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int a[3];

        for(int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }

        int minimum = *min_element(a, a + 3);

        int weak = n - minimum;

        cout << weak << endl;
    }

    return 0;
}