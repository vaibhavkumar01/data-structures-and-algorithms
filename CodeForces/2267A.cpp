// https://codeforces.com/contest/2267/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        char c;
        cin >> c;
        string s;
        cin >> s;
        int left = 0;
        int right = s.length() - 1;

        int coins = 0;
        
        while (left < right)
        {
            if (s[left] == s[right]) {}

            else if(s[left] == c || s[right] == c)
            {
                coins += 1;
            }
            else
            {
                coins +=2;
            }
            
            left++;
            right--;
        }
        cout << coins << '\n';
    }
    return 0;
}