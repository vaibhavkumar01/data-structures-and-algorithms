// https://codeforces.com/contest/2267/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Faster input/output
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Number of test cases
    int t;
    cin >> t;

    while (t--)
    {
        // Size of the array
        int n;
        cin >> n;

        // frequency[x] = how many times x occurs in the array
        unordered_map<int, int> frequency;

        for (int i = 0; i < n; i++)
        {
            int value;
            cin >> value;

            // Count the occurrence of each value
            frequency[value]++;
        }

        // Store all distinct values
        vector<int> values;

        for (auto x : frequency)
        {
            // x.first  = value
            // x.second = frequency of that value
            values.push_back(x.first);
        }

        // Put larger values first.
        // If two values have the same frequency in a prefix,
        // the larger value becomes the mode.
        sort(values.rbegin(), values.rend());

        // Find the maximum frequency of any value.
        // We will process the values occurrence-by-occurrence.
        int maxFreq = 0;

        for (auto x : frequency)
        {
            maxFreq = max(maxFreq, x.second);
        }

        /*
            Construct the answer in rounds.

            Round 1:
            Print every value that occurs at least once.

            Round 2:
            Print every value that occurs at least twice.

            Round 3:
            Print every value that occurs at least three times.

            And so on...

            Within each round, larger values are printed first.
        */
        for (int occurrence = 1; occurrence <= maxFreq; occurrence++)
        {
            for (int value : values)
            {
                // If this value has at least this many occurrences,
                // print it in the current round.
                if (frequency[value] >= occurrence)
                {
                    cout << value << " ";
                }
            }
        }

        cout << '\n';
    }

    return 0;
}