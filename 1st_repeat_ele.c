#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    int a[10^9];

    printf("Enter n:\n");
    scanf("%d",&n);

    if(n<0)
    {
        printf("Invalid");
        exit(0);
    }

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]==a[i])
            {
                printf("%d",a[i]);
                exit(0);
            }
        }
    }

    printf("No repeating element");

    return 0;
}
