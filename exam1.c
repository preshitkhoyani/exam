#include<stdio.h>

int main()
{
	
	int a;
	
	printf("Enter your number (+ or -): ");
	scanf("%d",&a);
	
	if(a > 0)
	{
		printf("Your number is positive");
	}
	else
	{
		printf("Your number is nagetive");
	}

}
/*

Enter your number (+ or -): -9
Your number is nagetive


Enter your number (+ or -): 99
Your number is positive

*/