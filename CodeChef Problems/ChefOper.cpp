#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        int em = 0;
        cin >> n;
        int a[n], b[n];

        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }

        for (int j = 0; j < n; j++)
        {
            cin >> b[j];
        }
        int s = 1;
        for (int j = 0; j < n - 2; j++)
        {

            if (a[j] > b[j])
            {
                cout << "NIE" << endl;
                em = 1;
                s = 0;
                break;
            }

            int temp = b[j] - a[j];

            a[j] = a[j] + temp;
            a[j + 1] = a[j + 1] + (2 * temp);
            a[j + 2] = a[j + 2] + (3 * temp);
        }

        int check = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] != b[j])
            {
                check = 1;
                break;
            }
        }

        if (check == 0)
        {
            cout << "TAK" << endl;
        }

        else if (em == 0)
        {
            cout << "NIE" << endl;
        }
    }
    return 0;
}