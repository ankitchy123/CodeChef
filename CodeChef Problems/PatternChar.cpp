#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    for(int i = 1; i <= n; i ++)
    {
        char startCh = 'A' + n - i;
        for(int j = 1; j <= i; j++)
        {
            char ch = startCh + j - 1;
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}