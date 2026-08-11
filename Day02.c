Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main()
{  
float length,width,perimeter,area;
printf("Enter the length\n");
scanf("%f",&length);
printf("Enter width\n");
scanf("%f",&width);
perimeter= 2*(length+width);
area= length*width;
printf("perimeter of rectangle is %.2f" ,perimeter);
printf("area of rectangle is %.2f" ,area);
return 0;
}
