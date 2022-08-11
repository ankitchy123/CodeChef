#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, a, b, c, d;
    cin >> x >> a >> b >> d;
    int arr[6];
    int j = 1;
    for (int i = 1; i <= 6; i++)
    {
        int v1 = a + (i - 1) * b;
        int v2 = c + (i - 1) * d;
        arr[j] = v1;
        arr[j + 1] = v2;
        j += 2;
    }
    sort(arr + 1, arr + 7);
    j = 1;
    int count = 0;
    while (x)
    {
        cout << "x is " << x << endl;
        x -= arr[j];
        count++;
        j++;
    }
    cout << count << endl;
    return 0;
}