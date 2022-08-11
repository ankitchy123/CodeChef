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
        vector<int> setbit(30);
        int ans = 0;
        while (n--)
        {
            int num;
            cin >> num;
            for (int i = 0; i < 30; i++)
            {
                if (num & (1 << i))
                {
                    setbit[i]++;
                }
            }

            for (int i = 0; i < 30; i++)
            {
                if (setbit[i] > 1)
                {
                    ans |= (1 << i);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}