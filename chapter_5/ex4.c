#include <stdio.h>

int main(void)
{
    float number, accumulator;
    char operator;

    printf("Begin calculations\n");
    scanf("%f %c", &number, &operator);

    accumulator = 0;
    while (operator!= 'E')
    {

        switch (operator)
        {
        case 'S':
            printf("= %f\n", accumulator += number);
            break;

        case '+':
            printf("= %f\n", accumulator /= number);
            break;

        case '-':
            printf("= %f\n", accumulator -= number);
            break;

        case '*':
            printf("= %f\n", accumulator *= number);
            break;

        case '/':
        {
            if (number == 0)
                printf("Cannot divide by zero\n");

            else
                printf("= %f\n", accumulator /= number);
        }

        default:
            printf("Unknown operator\n");
            break;
        }
        scanf("%f %c", &number, &operator);
    }

    printf("= %f\n", accumulator);
    printf("End of calculations.\n");

    return 0;
}