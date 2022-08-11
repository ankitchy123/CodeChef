#include <iostream>
using namespace std;

int main()
{
    int T;
    int a, b, c;
    cout << "Enter T : ";
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cout << "Enter a & b : ";
        cin >> a >> b;
        c = a + b;
        if (c < 3)
        {

            cout << "1\n";
        }
        else if (c >= 3 && c <= 10)
        {

            cout << "2\n";
        }
        else if (c >= 11 && c <= 60)
        {

            cout << "3\n";
        }
        else if (c > 60)
        {

            cout << "4\n";
        }
    }
    return 0;
}