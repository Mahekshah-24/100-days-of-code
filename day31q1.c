Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
  #include <stdio.h>

int main()
{
    int n, i, search;
    int a[100];
    int found = -1;

    scanf("%d", &n);

    // Taking array input
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Number to search
    scanf("%d", &search);

    // Linear search
    for(i = 0; i < n; i++)
    {
        if(a[i] == search)
        {
            found = i;
            break;
        }
    }

    // Printing result
    if(found == -1)
    {
        printf("-1");
    }
    else
    {
        printf("Found at index %d", found);
    }

    return 0;
}
