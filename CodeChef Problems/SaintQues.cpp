#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[3];
        int counta = 0, countb = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
            {
                counta++;
            }
        }

        int b[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> b[i];
            if (b[i] == 1)
            {
                countb++;
            }
        }

        if (counta == countb)
        {
            cout << "Pass" << endl;
        }
        else
        {
            cout << "Fail" << endl;
        }
    }

    return 0;
}