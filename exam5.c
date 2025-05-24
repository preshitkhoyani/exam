#include <stdio.h>

struct House 
{
    int room_quantity;
    int established_year;
    char city[20];
};

int main() 
{
    int n, i;

    printf("Enter houses number: ");
    scanf("%d", &n);

    struct House houses[n];

   
    for (i = 0; i < n; i++)
	{
        printf("\nEnter details for house %d:\n", i + 1);
        printf("Enter room number: ");
        scanf("%d", &houses[i].room_quantity);
        printf("Enter year of your house: ");
        scanf("%d", &houses[i].established_year);
        printf("Enter your city: ");
        scanf("%s", houses[i].city);
    }
    
    for (i = 0; i < n; i++)
	{
		printf("\n");
        printf("Rooms: %d\n", houses[i].room_quantity);
        printf("Year: %d\n", houses[i].established_year);
        printf("City: %s\n", houses[i].city);
        printf("\n");
    }

}
