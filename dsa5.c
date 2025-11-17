STACK OPERATION

#include <stdio.h>

int main()
{
    int size, value, choice;
    int top = -1;

    printf("Enter stack size: ");
    scanf("%d", &size);

    int stack[size];

    while (1)
    {
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1: 
                if (top == size - 1)
                {
                    printf("Stack Overflow!\n");
                }
                else
                {
                    printf("Enter the value to push: ");
                    scanf("%d", &value);
                    top++;
                    stack[top] = value;
                    printf("%d pushed into stack.\n", value);
                }
                break;

            case 2: 
                if (top == -1)
                {
                    printf("Stack Underflow!\n");
                }
                else
                {
                    printf("%d popped from stack.\n", stack[top]);
                    top--;
                }
                break;

            case 3: 
                if (top == -1)
                {
                    printf("Stack is empty.\n");
                }
                else
                {
                    printf("Stack elements:\n");
                    for (int i = top; i >= 0; i--)
                        printf("%d ", stack[i]);
                    printf("\n");
                }
                break;

            case 4:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}

output
Enter stack size: 5

1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 1
Enter the value to push: 20
20 pushed into stack.

1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 1
Enter the value to push: 30
30 pushed into stack.

1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 1
Enter the value to push: 53
53 pushed into stack.

1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 3
Stack elements:
53 30 20 

1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 2
53 popped from stack.

1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 3
Stack elements:
30 20 

1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 

