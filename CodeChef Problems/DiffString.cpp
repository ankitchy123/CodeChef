#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    //cout << "Enter t : ";
    cin >> t;
    while (t--)
    {
        int n;
        //cout << "Enter n : ";
        cin >> n;

        string str[n];
        for (int i = 0; i < n; i++)
        {
            cin >> str[i];
        }
        string ans;
        for (int i = 0; i < n; i++)
        {
            if (str[i][i] == '0')
            {
                ans += '1';
            }
            else
            {
                ans += '0';
            }
        }
        cout << ans << endl;
    }

    return 0;
}