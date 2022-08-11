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
        int a[n];
        int odd_count = 0, even_count = 0;
        vector<int> even, odd;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                even.push_back(a[i]);
            }
            else
            {
                odd.push_back(a[i]);
            }
        }
        if (even.size() == 0 || odd.size() == 0)
        {
            cout << "-1" << endl;
        }
        else if (even.size() == odd.size())
        {
            for (int i = 0; i < even.size(); i++)
            {
                cout << odd[i] << " " << even[i] << " ";
            }
            cout << endl;
        }
        else if (odd.size() < even.size())
        {
            for (int i = 0; i < odd.size(); i++)
            {
                cout << odd[i] << " " << even[i] << " ";
            }
            for (int i = odd.size(); i < even.size(); i++)
            {
                cout << even[i] << " ";
            }
            cout << endl;
        }
        else if (odd.size() > even.size())
        {
            for (int i = 0; i < even.size(); i++)
            {
                cout << even[i] << " " << odd[i] << " ";
            }
            for (int i = even.size(); i < odd.size(); i++)
            {
                cout << odd[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}