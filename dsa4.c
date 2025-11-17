BINARY SEARCH

#include <stdio.h>

int main()
{
    int n, i, key;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the elements in array (sorted):\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    int start = 0, end = n - 1, mid;

    while(start <= end)
    {
        mid = (start + end) / 2;

        if(a[mid] == key)
        {
            printf("Element found at index %d\n", mid);
            return 0;
        }
        else if(a[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    printf("Element not found\n");
    return 0;
}
output
Enter the size of array: 5
Enter the elements in array (sorted):
10 20 30 40 50
Enter the element to search: 40
Element found at index 3
