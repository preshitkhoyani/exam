#include <stdio.h>

int main() 
{
    int a = 100;
    int i, j ,d;

    for (i = 1; i <= 5; i++) 
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", a);
        }
        printf("\n");
        
        d = 1 + (2 * i);
        
        d = 1;
        for (int k = 0; k < i; k++) 
		{
            d += 2;
        }

        a = a - d;
    }
}

/*
100
97 97
92 92 92
85 85 85 85
76 76 76 76 76
*/