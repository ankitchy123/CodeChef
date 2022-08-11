#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cout << "Enter t : ";
    cin >> t;
    while (t--)
    {
        int a[2], a1[2], a2[2];
        cout << "Enter numbers : ";
        cin >> a[0] >> a[1] >> a1[0] >> a1[1] >> a2[0] >> a2[1];
        sort(a, a + 2);
        sort(a1, a1 + 2);
        sort(a2, a2 + 2);

        if ((a[0] == a1[0]) && (a[1] == a1[1]))
        {
            cout << 1 << endl;
        }
        else if ((a[0] == a2[0]) && (a[1] == a2[1]))
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}