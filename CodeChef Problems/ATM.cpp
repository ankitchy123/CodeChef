#include <iostream>
using namespace std;

int main()
{
    int a;
    float b;
    cout << "Enter the value of a & b : ";
    cin >> a >> b;
    if (a % 5 == 0)
    {
        if (a + 0.5 < b)
        {
            float c = b - a - 0.50;
            cout << c;
        }
        else
        {
            cout << b;
        }
    }
    else
    {
        cout << b;
    }
    return 0;
}



/*#include <iostream>
using namespace std;

int main()
{
    float b;
    int a;
    cout << "Enter a & b : ";
    cin >> a >> b;

    if (a % 5 == 0 && b >= a + 0.5)
    {
        cout << b - a - 0.50;
    }
    else
    {
        cout << b;
    }
    return 0;
}*/