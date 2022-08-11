#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s, p;
        cin >> s;
        cin >> p;
        if (s == p)
        {
            cout << "YES" << endl;
            continue;
        }
        int pcount0 = 0, pcount1 = 0, scount0 = 0, scount1 = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                scount0++;
            }
            if (s[i] == '1')
            {
                scount1++;
            }
            if (p[i] == '0')
            {
                pcount0++;
            }
            if (p[i] == '1')
            {
                pcount1++;
            }
        }
        //cout << count0 << " " << count1 << endl;
        if (pcount0 && pcount1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}