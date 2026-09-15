Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
  #include <stdio.h>

int main()
{
    int a[100];
    int n, i;
    int largest, second;

    scanf("%d", &n);

    // Input array elements
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // First sort the array in descending order
    for(i = 0; i < n - 1; i++)
    {
        int j, temp;

        for(j = i + 1; j < n; j++)
        {
            if(a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    largest = a[0];

    // Find first element smaller than largest
    for(i = 1; i < n; i++)
    {
        if(a[i] < largest)
        {
            second = a[i];
            break;
        }
    }

    printf("%d", second);

    return 0;
}
