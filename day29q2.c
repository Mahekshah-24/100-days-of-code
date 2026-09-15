Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/
  #include <stdio.h>

int main()
{
    int n, i;
    int a[100];
    int max, min;

    scanf("%d", &n);

    // Input array elements
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Assume first element is both maximum and minimum
    max = a[0];
    min = a[0];

    // Find maximum and minimum
    for(i = 1; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }

        if(a[i] < min)
        {
            min = a[i];
        }
    }

    printf("Max=%d, Min=%d", max, min);

    return 0;
}
