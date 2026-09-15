Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
  #include <stdio.h>

int main()
{
    int a[100];
    int n, i, pos, num;

    scanf("%d", &n);

    // Input array elements
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Input position and element
    scanf("%d %d", &pos, &num);

    // Shift elements to the right
    for(i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }

    // Insert element at given position
    a[pos] = num;

    n++;

    // Print updated array
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
