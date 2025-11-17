SWITCH CASE


#include <stdio.h>

int main()
{
    float a, b;
    int ch;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("\nMenu");
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\nPlease enter your choice: ");
    scanf("%d", &ch);

    switch(ch)
    {
        case 1:
            printf("\nAddition = %f\n", a + b);
            break;
        case 2:
            printf("\nSubtraction = %f\n", a - b);
            break;
        case 3:
            printf("\nMultiplication = %f\n", a * b);
            break;
        case 4:
            if(b != 0)
                printf("\nDivision = %f\n", a / b);
            else
                printf("\nError: Division by zero!\n");
            break;
        default:
            printf("\nInvalid option\n");
    }

    return 0;
}

output
Enter two numbers: 30 5

Menu
1. Addition
2. Subtraction
3. Multiplication
4. Division
Please enter your choice: 2

Subtraction = 25.000000



