#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cout << "Enter n & k : ";
    cin >> n >> k;
    int i, count = 0;
    for (i = 0; i < n; i++)
    {
        int A;
        cout << "Enter A : ";
        cin >> A;
        if (A % k == 0)
        {
            count++;
        }
        else
        {
            count;
        }
    }
    cout << count;

    return 0;
}