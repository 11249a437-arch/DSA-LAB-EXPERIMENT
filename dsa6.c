STRING REVERSAL 

#include <stdio.h>
#include <stdlib.h>

int top = -1;
int MAX;
char *stack;

void display()
{
    printf("There are %d elements in the stack\n", top + 1);
    for (int i = top; i >= 0; i--)
    {
        if (i == top)
            printf("| %c | <--- top\n", stack[i]);
        else
            printf("| %c |\n", stack[i]);
    }
}

void push(char item)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow!\n");
    }
    else
    {
        top++;
        stack[top] = item;
    }
}

char pop()
{
    if (top == -1)
    {
        printf("Stack Underflow!\n");
        return '\0';
    }
    else
    {
        return stack[top--];
    }
}

void stringReversal()
{
    char string[100];
    printf("Enter a string to reverse: ");
    scanf("%s", string);

    // Push all characters
    for (int i = 0; string[i] != '\0'; i++)
        push(string[i]);

    printf("Reversed string: ");
    // Pop all characters
    while (top != -1)
        printf("%c", pop());
    printf("\n");
}

int main()
{
    int operation;

    printf("Enter stack size: ");
    scanf("%d", &MAX);

    stack = (char *)malloc(MAX * sizeof(char));

    printf("\nChoose operation:");
    printf("\n1. Basic Stack Operations");
    printf("\n2. String Reversal");
    printf("\nEnter your choice: ");
    scanf("%d", &operation);

    if (operation == 2)
    {
        stringReversal();
        return 0;
    }
    else if (operation == 1)
    {
        while (1)
        {
            printf("\n1. Push");
            printf("\n2. Pop");
            printf("\n3. Display");
            printf("\n4. Exit");
            printf("\nEnter operation: ");
            scanf("%d", &operation);

            switch (operation)
            {
                case 1:
                {
                    char item;
                    printf("Enter character to push: ");
                    scanf(" %c", &item); 
                    push(item);
                    break;
                }

                case 2:
                {
                    char popped = pop();
                    if (popped != '\0')
                        printf("Popped: %c\n", popped);
                    break;
                }

                case 3:
                    display();
                    break;

                case 4:
                    printf("Exiting...\n");
                    return 0;

                default:
                    printf("Invalid option!\n");
            }
        }
    }

    return 0;
}
output
Enter stack size: 20

Choose operation:
1. Basic Stack Operations
2. String Reversal
Enter your choice: 2
Enter a string to reverse: hello

Reversed string: olleh
Enter stack size: 5

Choose operation:
1. Basic Stack Operations
2. String Reversal
Enter your choice: 1

1. Push
2. Pop
3. Display
4. Exit
Enter operation: 1
Enter character to push: A

1. Push
2. Pop
3. Display
4. Exit
Enter operation: 1
Enter character to push: B

1. Push
2. Pop
3. Display
4. Exit
Enter operation: 3
There are 2 elements in the stack
| B | <--- top
| A |

1. Push
2. Pop
3. Display
4. Exit
Enter operation: 2
Popped: B

1. Push
2. Pop
3. Display
4. Exit
Enter operation: 3
There are 1 elements in the stack
| A |

1. Push
2. Pop
3. Display
4. Exit
Enter operation: 4
Exiting...

