#include <stdio.h>

int reverse(int num) 
{
    int rev = 0;
    rev = (num % 10) * 100;     
    num = num / 10;

    rev = rev + (num % 10) * 10; 
    num = num / 10;

    rev = rev + num;            

    return rev;
}

int main()
 {
    int num, res;

    printf("Enter A 3-digit number: ");
    scanf("%d", &num);

    res = reverse(num);

    printf("Reversed number: %d\n", res);

}
