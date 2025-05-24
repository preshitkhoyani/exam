# include <stdio.h>

int main()

{
	
	int s;

	printf("Enter array size : ");
    scanf("%d", &s);

    int a[s];

    printf("Enter array elements :\n");
    for (int i = 0; i < s; i++) 
	{
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
	}
	
	  for (int i = 0; i < s; i++) 
	{
        printf("Square of this elements is : %d",a[i]*a[i]);
        printf("\n");
	}
	
}