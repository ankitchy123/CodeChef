#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A, B, C, D, E;
        cin >> A >> B >> C >> D >> E;
        bool ans = true;
        if ((A + B <= D && C <= E) || (A + B <= E && C <= D))
        {
            ans = true;
        }
        else if ((A + C <= D && B <= E) || (A + C <= E && B <= D))
        {
            ans = true;
        }
        else if ((B + C <= D && A <= E) || (B + C <= E && A <= D))
        {
            ans = true;
        }
        else
        {
            ans = false;
        }
        if (ans == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}