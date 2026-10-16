
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Construct the LPS (Longest Proper Prefix which is also Suffix) array.
vector<int> buildLPS(const string& P)
{
    int m = P.size();

    // lps[i] = length of the longest proper prefix of P[0...i]
    // that is also a suffix of P[0...i].
    vector<int> lps(m, 0);

    // prefix = length of the current matching prefix.
    // suffix = index whose LPS value we are calculating.
    int prefix = 0;
    int suffix = 1;

    while (suffix < m)
    {
        // If the characters match, extend the matching prefix.
        if (P[prefix] == P[suffix])
        {
            prefix++;
            lps[suffix] = prefix;
            suffix++;
        }
        else
        {
            if (prefix == 0)
            {
                // No nonempty prefix matches this suffix.
                lps[suffix] = 0;
                suffix++;
            }
            else
            {
                // Try a shorter matching prefix.
                // Do NOT advance suffix: compare the same character again.
                prefix = lps[prefix - 1];
            }
        }
    }

    return lps;
}

// Search for pattern P inside ordinary text T using KMP.
bool kmpSearch(const string& T, const string& P)
{
    if (P.empty()) return true;
    if (P.size() > T.size()) return false;

    vector<int> lps = buildLPS(P);

    int i = 0; // Current index in the text.
    int j = 0; // Number of pattern characters matched.

    while (i < T.size())
    {
        // Matching characters: advance both indices.
        if (T[i] == P[j])
        {
            i++;
            j++;
        }

        // The entire pattern has been matched.
        if (j == P.size())
        {
            return true;
        }
        // A mismatch occurred and text characters remain.
        else if (i < T.size() && T[i] != P[j])
        {
            if (j != 0)
            {
                // Reuse the longest matching prefix information.
                // Keep i unchanged; compare T[i] against the new P[j].
                j = lps[j - 1];
            }
            else
            {
                // No prefix can be reused, so advance in the text.
                i++;
            }
        }
    }

    // The pattern was not found.
    return false;
}

// Return 1 if P occurs in circular T; otherwise return 0.
int circularSearch(string T, string P)
{
    if (P.empty()) return 1;

    // A valid circular match cannot exceed one complete traversal of T.
    if (P.size() > T.size()) return 0;

    // Doubling T makes wrap-around substrings searchable normally.
    string doubledT = T + T;

    return kmpSearch(doubledT, P) ? 1 : 0;
}

int main()
{
    string T = "CDEAB";
    string P = "ABCDE";

    cout << circularSearch(T, P) << '\n'; // Output: 1

    return 0;
}