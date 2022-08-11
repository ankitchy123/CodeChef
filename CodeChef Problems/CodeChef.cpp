// Small Fctorials

/*#include <iostream>
using namespace std;

int main()
{
    int T;
    cout << "Enter T : ";
    cin >> T;
    while (T--)
    {
        int n, fact = 1;
        cout << "Enter n : ";
        cin >> n;
        for (int j = n; j >= 1; j--)
        {
            fact = fact * j;
        }
        cout << fact << endl;
    }

    return 0;
}
*/

// Raju and his trip

/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter bus no. : ";
    cin >> n;

    if (n % 5 == 0 || n % 6 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
*/

// Odd Even Multiple
/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    if (n % 3 != 0)
    {
        cout << "-1";
    }
    else
    {
        int k = n / 3;
        if (k % 2 == 0)
        {
            cout << "0";
        }
        else if (k % 2 != 0)
        {
            cout << "1";
        }
    }
    return 0;
}*/

// NOT LAST
/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    int k = n % 10;
    n = n / 10;
    k = n % 10;
    if (k == 7)
    {
        cout << "1";
    }
    else
    {
        cout << "0";
    }
    return 0;
}*/

//RANGE ODD
/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    int L, R;
    cout << "Enter L & R : ";
    cin >> L >> R;
    for (int i = L; i <= R; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}*/

// REVERSE ME
/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cout << "Enter N : ";
    cin >> N;
    int n[N];
    for (int i = 1; i <= N; i++)
    {
        cout << "Enter n : ";
        cin >> n[i];
    }
    for (int i = N; i >= 1; i--)
    {
        cout << n[i] << " ";
    }

    return 0;
}*/

// FIND ME
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, k;
    cout << "Enter N & k : ";
    cin >> N >> k;
    int n[N];
    for (int i = 0; i < N; i++)
    {
        cout << "Enter n : ";
        cin >> n[i];
    }
    int count = -1;
    for (int i = 0; i < N; i++)
    {
        if (k == n[i])
        {
            count = 1;
            break;
        }
    }
    cout << count;
    return 0;
}