// https://codeforces.com/contest/2276/problem/C
// Subarrays

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<long long> pref(n + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            long long x;
            cin >> x;
            pref[i] = pref[i - 1] + x;
        }

        vector<long long> freq(k, 0);
        long long ans = 0;

        for (int r = k + 1; r <= n; r++)
        {
            int idx = r - k - 1;

            // Add the newly eligible prefix sum.
            freq[pref[idx] % k]++;

            // Count valid subarrays ending at r.
            ans += freq[pref[r] % k];
        }

        cout << ans << '\n';
    }

    return 0;
}
