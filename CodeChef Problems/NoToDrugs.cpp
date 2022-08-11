#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;

    int n, k, l;
    int s[n];
    while (t--)
    {
        cin >> n >> k >> l;
        int dose = l - 1;

        int max = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            if (s[i] > max)
            {
                max = s[i];
            }
        }

        int max_count = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == max)
            {
                max_count++;
            }
        }

        if (s[n - 1] == max && max_count == 1)
        {
            cout << "yes" << endl;
        }

        else
        {
            s[n - 1] += dose * k;

            if (s[n - 1] > max)
            {
                cout << "yes" << endl;
            }
            else
            {
                cout << "no" << endl;
            }
        }
    }

    return 0;
}