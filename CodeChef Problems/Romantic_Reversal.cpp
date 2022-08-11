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
        string s2;
        cin >> s2;

        string ans = "";
        int i = 0;
        int j = k - 1;

        string s1 = s2.substr(k, n);
        while (i < j)
        {
            ans += s2[i];
            ans += s2[j];
            i++;
            j--;
        }
        if (i == j)
        {
            ans += s2[i];
        }
        reverse(ans.begin(), ans.end());
        ans += s1;
        cout << ans << endl;
    }
    return 0;
}