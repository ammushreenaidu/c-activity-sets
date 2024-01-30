//2. Write a C program to add two numbers.
#include <stdio.h>
int main()
{
    int x,y,sum=0;
    printf("Enter your first Numbr:");
    scanf("%d",&x);

    printf("enter the second Number:");
    scanf("%d",&y);
    if(x>=0&&y>=0)
    {
    sum = x+y;
    printf("%d\n",sum);
    }
    return 0;
}

