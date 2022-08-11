#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cout << "Enter t : ";
    cin >> t;
    while (t--)
    {
        int n, k;
        cout << "Enter n & k : ";
        cin >> n >> k;
        int x = 0;
        for (int i = 1; i <= k; i++)
        {
            x = n % i;
        }
        cout << x << endl;
    }
    return 0;
}