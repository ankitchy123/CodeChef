#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned long int p, a, b, c, x, y;
        cin >> p >> a >> b >> c >> x >> y;
        unsigned long int m = (a * x) + b;
        unsigned long int n = (a * y) + c;
        if (m > n)
        {
            cout << p / n << endl;
        }
        else
        {
            cout << p / m << endl;
        }
    }
    return 0;
}