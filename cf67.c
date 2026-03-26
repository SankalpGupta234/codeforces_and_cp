#include <stdio.h>

int main()
{
    int t;
    scanf("%i", &t);
    
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%i", &n);
        int A[n];

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &A[j]);
        }

        int flag67 = 0;
        for (int j = 0; j < n; j++)
        {
            if (A[j] == 67)
            {
                flag67 = 1;
            }
        }

        if (flag67 == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}