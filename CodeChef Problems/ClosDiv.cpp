#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    cout << "Enter A : ";
    cin >> A;
    cout << "Enter B : ";
    cin >> B;
    for (int i = 0; i <= B; i++)
    {
        if ((A - i) % B == 0)
        {
            cout << A - i;
            break;
        }
    }
    return 0;
}