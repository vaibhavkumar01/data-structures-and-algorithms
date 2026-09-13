// https://codeforces.com/contest/2264/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n + 1);
        vector<int> wrong;

        for (int i = 1; i <= n; i++) {
            cin >> p[i];

            if (p[i] != i) {
                wrong.push_back(i);
            }
        }

        bool possible = true;

        int k = wrong.size();

        for (int i = 0; i < k; i++) {
            if (p[wrong[i]] != wrong[k - 1 - i]) {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << '\n';
    }

    return 0;
}