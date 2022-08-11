#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cout << "Enter t : ";
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int N[5];
        for (int j = 0; j <= 4; j++)
        {
            cout << "Enter N : ";
            cin >> N[j];
        }
        sort(N, N + 5);
        cout << N[2] << endl;
    }

    return 0;
}