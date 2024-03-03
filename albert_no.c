#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void sum(int n);
int main()
{
    int n;
    printf("Enter n:\n");
    scanf("%d",&n);

    if(n>9)
        sum(n);
    else
        printf("Number should have more than one digit\n");
    return 0;
}
void sum(int n)
{
    int r,s=0;

     while(n!=0)
     {
         r=n%10;
         //printf("%d\n",r);
         s=s+r;
         n=n/10;
     }
     if(s%2==0)
    {
        printf("Sum of all digits = %d\n ITS A ALBERT NO.\n",s);
    }
    else
    {
        printf("Sum of all digits = %d\n ITS NOT A ALBERT NO.\n",s);
    }
}
