#include <stdio.h>

int main() 
{ 

	int k;
	
	printf("Enter valu of array : ");
	scanf("%d", &k);
	
    int arr[k], i;

    printf("Enter array elements :\n");
    for (i = 0; i < k; i++) 
	{printf("a[%d]",i);
        scanf("%d", &arr[i]);
    }

    int min = arr[0];

    for (i = 1; i < k; i++)
	{
        if (arr[i] < min)
		{
            min = arr[i];
        }
    }
    printf("Smallest number = %d\n", min);


}
/*
		Enter valu of array : 3
		Enter array elements :
		a[0]5
		a[1]6
		a[2]9
		Smallest number = 5
*/