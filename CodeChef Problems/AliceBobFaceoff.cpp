#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        int count = 0;
        while (n > 0)
        {
            int c = 0;
            int i = 1;
            for (int x = 2; x <= n; x = pow(2, i))
            {
                if (n % x == 0)
                {
                    n = n / x;
                    count++;
                    c += 1;
                    break;
                }
                i++;
            }
            if (c == 0)
            {
                n = n - 1;
                count++;
            }
        }
        if (count % 2 == 0)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Alice" << endl;
        }
    }

    return 0;
}