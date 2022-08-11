#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    // cout << "Enter t : ";
    cin >> t;
    while (t--)
    {
        int N, A;
        // cout << "Enter N & A : ";
        cin >> N >> A;
        int k = sqrt(N);
        cout << k * A << endl;
    }

    return 0;
}