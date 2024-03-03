#include<stdio.h>
#include<stdlib.h>

void abcd_triangle(int);

int main()
{
    int n;

    printf("Enter the n: ");
    scanf("%d",&n);

    if(n<=0)
    {
        printf("Invalid input\n");
        exit(0);
    }

    abcd_triangle(n);
}

void abcd_triangle(int n)
{
    int i,j,c=65;


    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" %c  ",c);
            c++;
        }
        printf("\n");
    }
}
