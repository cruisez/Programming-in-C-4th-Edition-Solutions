#include <stdio.h>

int main(void) 
{
	int number, right_digit;
	char operator;

	printf("Enter your number.\n");
	scanf("%c%i",&operator, &number);

	do 
    {
		right_digit = number % 10;
		printf("%i", right_digit);
		number = number / 10;
	} 
    while (number != 0);

	printf("%c\n", operator);

	return 0;
}