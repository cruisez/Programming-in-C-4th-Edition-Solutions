// Program to evaluate simple expressions of the form number operator number

#include <stdio.h>

int main (void)
{
    float value1, value2;
    char op;

    printf("Enter your values\n");
    scanf("%f %c %f", &value1, &op, &value2);

    if (op == '+')
    printf("%.2f\n", value1 + value2);

    else if (op == '-')
    printf("%.2f\n", value1 - value2);

    else if (op == '*')
    printf("%.2f\n", value1 * value2);

    else if (op == '/')
    {
        if (value2 == 0)
        printf("Division by zero is not allowed\n");
        else
        printf("%.2f\n", value1 / value2);
    }

    else
    printf("Unknown operator.\n");

    return 0;
}
