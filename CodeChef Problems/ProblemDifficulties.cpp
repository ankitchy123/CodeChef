#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a1, a2, a3, a4;
        cin >> a1 >> a2 >> a3 >> a4;

        unordered_map<int, int> map1;
        map1[a1]++;
        map1[a2]++;
        map1[a3]++;
        map1[a4]++;

        int size = map1.size();
        if (size == 4 || size == 3)
        {
            cout << "2" << endl;
        }
        else if (size == 1)
        {
            cout << "0" << endl;
        }
        else if (size == 2)
        {
            if (map1[a1] == 3 || map1[a2] == 3)
            {
                cout << "1" << endl;
            }
            else
            {
                cout << "2" << endl;
            }
        }
    }
    return 0;
}