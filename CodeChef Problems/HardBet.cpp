#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    //cout << "Enter t : ";
    cin >> t;
    while (t--)
    {
        int Sa, Sb, Sc;
        //cout << "Enter Sa, Sb & Sc : ";
        cin >> Sa >> Sb >> Sc;
        if ((Sc > Sb) && (Sb < Sa))
        {
            cout << "Bob" << endl;
        }
        else if ((Sc < Sb) && (Sc < Sa))
        {
            cout << "Alice" << endl;
        }
        else
        {
            cout << "Draw" << endl;
        }
    }
    return 0;
}