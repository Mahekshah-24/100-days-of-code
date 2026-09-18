Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
  #include <stdio.h>

int main()
{
    int a[10][10];
    int rows, cols;
    int i, j, sum;

    scanf("%d %d", &rows, &cols);

    // Input matrix
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Diagonal traversal
    for(sum = 0; sum <= rows + cols - 2; sum++)
    {
        for(i = 0; i < rows; i++)
        {
            j = sum - i;

            if(j >= 0 && j < cols)
            {
                printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}
