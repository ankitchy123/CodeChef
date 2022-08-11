#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned long int a, b;
        cin >> a >> b;
        int counta = 0, countb = 0;
        for (int i = 2; i <= a; i++)
        {
            if (a % i == 0)
            {
                counta++;
                if (b % i == 0)
                {
                    countb++;
                }
            }
        }
        if (counta == countb)
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