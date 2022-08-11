#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cout << "Enter T : ";
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int G1, S1, B1, G2, S2, B2;
        cout << "Enter G1, S1, B1, G2, S2 & B2 : ";
        cin >> G1 >> S1 >> B1 >> G2 >> S2 >> B2;
        if (G1 + S1 + B1 > G2 + S2 + B2)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "2" << endl;
        }
    }

    return 0;
}