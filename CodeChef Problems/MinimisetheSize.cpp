#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int c;
        cin >> c;
        vector<int> arr;
        int xorr;
        if (c % 2 == 0)
        {
            arr.push_back(c - 1);
            xorr = c - 1;
        }
        else
        {
            arr.push_back(c);
            xorr = c;
        }

        int j = 0;
        while (1)
        {
            if (xorr == c)
            {
                break;
            }
            else
            {
                j++;
                arr.push_back(pow(2, j + 1) - 1);
                for (int i = j; i < arr.size(); i++)
                {
                    xorr ^= arr[i];
                }
            }
        }
        cout << arr.size() << endl;
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}