#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> &p, pair<int, int> &q)
{
    return p.second < q.second;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<pair<int, int>> vec;

        for (int i = 0; i < n; i++)
        {
            int b;
            cin >> b;
            vec.push_back(make_pair(b, i));
        }
        sort(vec.begin(), vec.end());
        int k = 0;

        for (int i = 0; i < n; i++)
        {
            if (vec[i].first > k)
            {
                vec[i].first = k;
                k++;
            }
        }

        sort(vec.begin(), vec.end(), comp);
        for (int i = 0; i < n; i++)
        {
            cout << vec[i].first << " ";
        }
        cout << endl;
    }
    return 0;
}