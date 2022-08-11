#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned long long int n, s, sum = 0;
        cin >> n >> s;
        sum = (n * (n + 1)) / 2;
        sum = sum - s;
        if (sum >= 1 && sum <= n)
        {
            cout << sum << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}