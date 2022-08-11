#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cout << "Enter t : ";
    cin >> t;
    while (t--)
    {
        int n, i, count = 0;
        cout << "Enter n : ";
        cin >> n;
        for (i = 2; i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
        }

    return 0;
}