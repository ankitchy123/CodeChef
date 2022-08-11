#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - a; j >= 1; j = j - 1)
        {
            cout << " ";
        }
        a++;
        for (int k = 1; k <= (2 * i) - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}