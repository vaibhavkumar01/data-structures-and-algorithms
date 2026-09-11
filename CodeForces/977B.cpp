// https://codeforces.com/contest/977/problem/B
#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<string, int> hash_map;

    int n;
    string s;

    cin >> n >> s;

    for(int i = 0; i < n-1; i++)
    {
        string temp = s.substr(i, 2);
        hash_map[temp]++;
    }

    int mx = 0;
    string ans;
    for(auto key : hash_map)
    {
        if(mx < key.second)
        {
            mx = key.second;
            ans = key.first;
        }
    }
    cout << ans;
    
    return 0;
}