#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a > 50)
        {
            cout << "A" << endl;
            continue;
        }
        if (b > 50)
        {
            cout << "B" << endl;
            continue;
        }
        if (c > 50)
        {
            cout << "C" << endl;
            continue;
        }
        cout << "NOTA" << endl;
    }

    return 0;
}