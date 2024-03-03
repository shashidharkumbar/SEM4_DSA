#include <stdio.h>
int main()
{
    int n,i,sum=0;

    printf("Enter no. of persons: ");
    scanf("%d",&n);

    if(n>0)
    {
        for(i=n;i>=1;i--)
            sum+=(n-1);

        printf("Number of handshakes = %d",sum/2);
    }
    else
        printf("n is incorrect");
    return 0;
}
