#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int count = 0;
        char a = '1';

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != a)
            {
                count++;
                a = s[i];
            }
        }
        cout << count << endl;
    }
    return 0;
}