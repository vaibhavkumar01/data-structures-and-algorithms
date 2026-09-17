// https://codeforces.com/problemset/problem/71/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;

        // process the word
        int L = word.length();

        if(L > 10){
            cout << word[0] << L - 2 << word[L - 1] << endl;
        }
        else {
            cout << word << endl;
        }
    }

    return 0;
}