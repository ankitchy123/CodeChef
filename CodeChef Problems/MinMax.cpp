#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cout << "Enter t : ";
    cin >> t;
    while (t--)
    {
        int n;
        cout << "Enter n : ";
        cin >> n;
        long long int A[n];
        for (int i = 0; i < n; i++)
        {
            cout << "Enter A : ";
            cin >> A[i];
        }
        sort(A, A + n);
        cout << A[0] * (n - 1) << endl;
    }
    return 0;
}