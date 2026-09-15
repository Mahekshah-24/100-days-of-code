Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
  #include <stdio.h>

int main()
{
    int a[100][100];
    int sum[100];
    int rows, cols;
    int i, j;

    scanf("%d %d", &rows, &cols);

    // Input matrix
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Find sum of each row
    for(i = 0; i < rows; i++)
    {
        sum[i] = 0;

        for(j = 0; j < cols; j++)
        {
            sum[i] = sum[i] + a[i][j];
        }
    }

    // Print row sums
    for(i = 0; i < rows; i++)
    {
        printf("%d ", sum[i]);
    }

    return 0;
}
