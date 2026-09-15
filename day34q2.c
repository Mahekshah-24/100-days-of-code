Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
  #include <stdio.h>

int main()
{
    int a[100];
    int n, i, pos;

    scanf("%d", &n);

    // Input array elements
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Input position/index to delete
    scanf("%d", &pos);

    // Shift elements to the left
    for(i = pos; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    // Decrease array size
    n--;

    // Print updated array
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
