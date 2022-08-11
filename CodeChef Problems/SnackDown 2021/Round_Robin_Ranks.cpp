#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int ans = (n - k) + ((k - 1) / 2);
        cout << ans * 2 << endl;
    }
    return 0;
}