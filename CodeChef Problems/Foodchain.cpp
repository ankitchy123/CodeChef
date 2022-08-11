#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, E, K;
    cout << "Enter T : ";
    cin >> T;
    for (int i = 0; i < T; i++)
    {

        cout << "\nEnter E & K : ";
        cin >> E >> K;
        int count = 1;
        while (E / K > 0)
        {
            count++;
            E = E / K;
        }
        cout << "\n"<< count;
    }

    return 0;
}