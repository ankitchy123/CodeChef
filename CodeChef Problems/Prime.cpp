#include <bits/stdc++.h>
typedef unsigned long long ll;
using namespace std;

int main()
{
    // ll N, i, count = 0;
    int N, i, count = 0;
    //cout << "Enter N : ";
    cin >> N;
    if ((N > 0) || (N != 2))
    {

        for (i = 1; i <= (N / 2) + 1; i++)
        {
            if (N % i == 0)
            {
                count++;
            }
            if (count == 2)
            {
                break;
            }
        }
        if (count > 1)
        {
            cout << "0";
        }
        else
        {
            cout << "1";
        }
    }
    else
    {
        cout << "0";
    }
    return 0;
}