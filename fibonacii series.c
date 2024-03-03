#include<stdio.h>
int main()
{
    int n,i;
    int a=-1;
    int b=1;
    int c;

    printf("Enter n: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
}
