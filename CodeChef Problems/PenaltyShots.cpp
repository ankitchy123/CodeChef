#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cout << "Enter t : ";
    cin >> t;
    while (t--)
    {
        int A[10];
        for (int i = 1; i <= 10; i++)
        {
            cout << "Enter A[" << i << "] : ";
            cin >> A[i];
        }
        int count1 = 0, count2 = 0;
        for (int i = 1; i <= 9; i = i + 2)
        {
            if (A[i] == 1)
            {
                count1++;
            }
        }
        for (int i = 2; i <= 10; i = i + 2)
        {
            if (A[i] == 1)
            {
                count2++;
            }
        }

        if (count1 > count2)
        {
            cout << "1" << endl;
        }

        else if (count2 > count1)
        {
            cout << "2" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }

    return 0;
}