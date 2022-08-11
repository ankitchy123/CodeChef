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
        string s;
        unordered_map<string, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            mp[s]++;
        }
        int temp, sum = 0;
        for (auto &v : mp)
        {
            temp = 2;
            for (int i = 1; i < v.first.size(); i++)
            {
                if ((v.first[i] == 'd' || v.first[i] == 'f') && (v.first[i - 1] == 'j' || v.first[i - 1] == 'k'))
                {
                    temp += 2;
                }
                else if ((v.first[i - 1] == 'd' || v.first[i - 1] == 'f') && (v.first[i] == 'j' || v.first[i] == 'k'))
                {
                    temp += 2;
                }
                else
                {
                    temp += 4;
                }
            }
            sum += (temp + ((temp / 2) * (v.second - 1)));
        }
        cout << sum << endl;
    }
    return 0;
}