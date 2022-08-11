#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cout << "Enter t : ";
    cin >> t;
    while (t--)
    {
        int n, rev = 0;
        cout << "Enter n : ";
        cin >> n;
        while (n > 0)
        {
            int k = n % 10;
            n = n / 10;
            rev = 10 * rev + k;
        }
        cout << rev << endl;
    }

    return 0;
}