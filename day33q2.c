Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
  #include <stdio.h>

int main()
{
    int a[100];
    int n, i, num, pos;

    scanf("%d", &n);

    // Input sorted array
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Element to insert
    scanf("%d", &num);

    // Find correct position
    pos = n;

    for(i = 0; i < n; i++)
    {
        if(num < a[i])
        {
            pos = i;
            break;
        }
    }

    // Shift elements to the right
    for(i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }

    // Insert the new element
    a[pos] = num;
    n++;

    // Print the array
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
