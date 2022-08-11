#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cout << "Enter t : ";
    cin >> t;
    while (t--)
    {
        string S, s1, s2;
        cout << "Enter S : ";
        cin >> S;
        if (S.size() % 2 == 0)
        {
            int n = (S.size() - 1) / 2;
            for (int i = 0; i <= n; i++)
            {
                s1 += S[i];
            }
            for (int i = n + 1; i < S.size(); i++)
            {
                s2 += S[i];
            }
        }

        else
        {
            int n = (S.size()) / 2;
            for (int i = 0; i < n; i++)
            {
                s1 += S[i];
            }
            for (int i = n + 1; i < S.size(); i++)
            {
                s2 += S[i];
            }
        }
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        if (s1 == s2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}