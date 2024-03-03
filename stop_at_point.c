#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,a[100]={0},i,sum=0,count=0;

    printf("Enter n:\n");
    scanf("%d",&n);

    if(n>0)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            if(a[i]>0)
            {
                sum+=a[i];
                count++;
            }
        }
        printf("Sum is %d.\n",sum);
        printf("Numbers added %d.",count);
    }
    else
        printf("Invalid input.\n");

    return 0;
}
