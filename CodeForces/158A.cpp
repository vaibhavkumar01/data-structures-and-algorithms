// https://codeforces.com/problemset/problem/158/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);

    int n, k;
    cin >> n >> k;

    vector<int> scores(n);
    // read scores
    for(int i = 0; i < n; i++)
    {
        cin >> scores[i];
    }

    // Score of the k-th participants
    int threshold = scores[k-1];

    int answer = 0;

    // Count participants who qualify
    for(int i = 0; i < n; i++)
    {
        if(scores[i] >= threshold && scores[i] > 0)
        {
            answer++;
        }
    }

    cout << answer << '\n';

    return 0;
}