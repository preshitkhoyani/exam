#include <stdio.h>
#include <string.h>

int main() 
{
    FILE *f;
    int n, i;
    char name[50], role[50];

    printf("Enter number of employees: ");
    scanf("%d", &n);

    f = fopen("data.txt", "w");
    
    if (f == NULL) 
	{
        printf("!!!! Error file is not open !!!!.\n");
    }

    for (i = 0; i < n; i++) 
	{
        printf("Enter name of employee %d: ", i+1);
        scanf("%s", name);

        printf("Enter role of employee %d: ", i+1);
        scanf("%s", role);

        fprintf(f, "Name: %s, Role: %s\n", name, role);
        
        printf("\n\n");
    }

    fclose(f);
    printf("Data written successfully\n");
}

