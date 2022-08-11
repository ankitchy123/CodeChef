#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int T;
    printf("Enter T : ");
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int N, p, K, day = 0;
        printf("Enter N, p & K : ");
        scanf("%d %d %d", &N, &p, &K);
        for (int a = 0; a <= N - 1; a++)
        {
            for (int b = a; b <= N - 1; b += K)
            {
                if (b % K == a)
                {
                    day++;
                    if (b == p)
                    {
                        break;
                    }
                }
            }
        }

        printf("%d\n", day);
    }
    return 0;
}