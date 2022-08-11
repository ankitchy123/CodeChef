#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int X, Y;
    int ans;
    for (int i = 0; i < T; i++)
    {
        cin >> X >> Y;
        if (__gcd(X, Y) > 1)
        {
            ans = 0;
        }
        else if (__gcd(X + 1, Y) > 1 || __gcd(X, Y + 1) > 1)
        {
            ans = 1;
        }
        else
        {
            ans = 2;
        }
        cout << ans << endl;
    }
    return 0;
}