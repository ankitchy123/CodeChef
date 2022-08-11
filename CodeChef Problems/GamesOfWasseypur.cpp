#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e5 + 1;

int main()
{
    ll t;
    cin >> t;

    ll dpArr[N];
    dpArr[1] = 1;
    dpArr[2] = 0;

    for (ll i = 3; i < N; i++)
    {
        dpArr[i] = min(dpArr[i - 1], dpArr[i - 2]) ^ 1;
    }

    while (t--)
    {
        ll N;
        cin >> N;

        string str;
        cin >> str;

        char k = '2';

        ll count = 0;
        for (auto i : str)
        {
            if (i != k)
            {
                k = i;
                count++;
            }
        }
        if (dpArr[count] == 1)
        {
            cout << "SAHID" << endl;
        }
        else
        {
            cout << "RAMADHIR" << endl;
        }
    }
}