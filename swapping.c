#include<stdio.h>
void main()
{
int x,y ;
printf("Enter integer value for x ");
scanf("%d" ,&x);
printf("Enter integer value for y ");
scanf("%d" ,&y);
x=x+y;
y=x-y;
x=x-y;
printf("Value of x and y after swapping");
printf("\n");
printf("x = %d" , x);
printf("\n");
printf("y = %d" , y);


}
