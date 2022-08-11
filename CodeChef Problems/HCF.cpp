#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cout << "Enter t : ";
    cin >> t;
    while (t--)
    {
        int a, b;
        cout << "Enter a & b : ";
        cin >> a >> b;
        cout << __gcd(a, b) << " " << ((a * b) / __gcd(a, b)) << endl;
    }

    return 0;
}