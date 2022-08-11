#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i == n - 1 && j == 2)
                {
                    cout << "Q";
                }
                else if (i <= n - 3 && j == n + 1 - i)
                {
                    cout << "Q";
                }
                else
                {
                    cout << ".";
                }
            }
            cout << endl;
        }
    }

    return 0;
}