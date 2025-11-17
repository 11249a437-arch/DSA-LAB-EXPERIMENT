LINEAR SEARCH

#include <stdio.h>

int main()
{
    int i, n, b;
    int key = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &b);

    for(i = 0; i < n; i++)
    {
        if(a[i] == b)
        {
            printf("Element found at index %d\n", i);
            key = 1;
        }
    }

    if(key == 0)
    {
        printf("Element not found\n");
    }

    return 0;
}


Enter the size of the array: 5
Enter 5 elements:
10 40 50 340 479 
Enter the element to be searched: 340
Element found at index 3
