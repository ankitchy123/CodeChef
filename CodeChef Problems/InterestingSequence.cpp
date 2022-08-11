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
        int count = 0;
        while (1)
        {
            if (k % 2 == 0)
            {
                count++;
                k /= 2;
            }
            else
            {
                break;
            }
        }
        cout << count << endl;
    }
    return 0;
}