#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        cout << 52 - ((52 / k) * k) << endl;
    }
    return 0;
}