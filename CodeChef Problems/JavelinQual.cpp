#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cout << "Enter t : ";
    cin >> t;
    while (t--)
    {
        int N, M, X;
        cout << "Enter N, M & X : ";
        cin >> N >> M >> X;
        int A[N], count = 0;
        for (int i = 1; i <= N; i++)
        {
            cout << "Enter A : ";
            cin >> A[i];
        }
        int B[X];
        for (int i = 1; i <= N; i++)
        {
            int j = 0;
            sort(A, A + N);
            if (A[i] >= M)
            {
                B[j] == i;
                j++;
                count++;
                cout << X << i << " ";
                if (count == X)
                {
                    break;
                }
                else if (count < X)
                {
                    for (int i = N - count; i >= 1; i--)
                    {
                        cout << i << " ";
                        if (count == X)
                        {
                            break;
                        }
                    }
                }
            }
        }
        cout << endl;
    }

    return 0;
}