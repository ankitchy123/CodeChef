#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cout << "Enter t : ";
    cin >> T;
    while (T--)
    {
        int N, Q;
        cout << "Enter N & Q : ";
        cin >> N >> Q;
        int x[N], y[N];
        for (int i = 0; i < N; i++)
        {
            cout << "Enter x & y : ";
            cin >> x[i] >> y[i];
        }
        int v[Q], t[Q];
        for (int j = 0; j < Q; j++)
        {
            cout << "Enter v & t : ";
            cin >> v[j] >> t[j];
        }
    }

    return 0;
}