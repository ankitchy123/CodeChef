#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, rev = 0, original;
    cout << "Enter n : ";
    cin >> n;
    original = n;
    while (n != 0)
    {
        int k = n % 10;
        n = n / 10;
        rev = rev * 10 + k;
    }
    cout << rev << endl;
    if (original == rev)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}