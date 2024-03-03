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

    if(n>0)
    {
     sum(n);
    }
    else
    {
     printf("Invalid input\n");
    }
        return 0;
}

void sum(int n)
{
    int i=1, esum=0,osum=0,num;
    printf("Enter Array elements:\n");
    while(i<=n)
    {
        scanf("%d",&num);
        if(num%2==0)
            esum=esum+num;
        else
            osum=osum+num;
        i++;
    }
    printf("\nSum of even numbers=%d\n",esum);
    printf("Sum of odd numbers=%d\n",osum);

}
