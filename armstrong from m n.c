#include<stdio.h>
#include<math.h>

int armstrong(int, int);
int main()
{
    int m,n;
    int r,a;
    int i;

    printf("Enter the num of digit: ");
    scanf("%d",&r);

    printf("Enter the m and n: ");
    scanf("%d%d",&m,&n);

    for(i=m;i<=n;i++)
    {
        a=armstrong(i, r);
        if(a==1)
            printf("%d\n",i);
    }
}
int armstrong(int i, int r)
{
    int rem;
    int sum=0;
    int temp=i;

    while(i)
    {
        rem=i%10;
        sum=sum+pow(rem, r);
        i=i/10;
    }

    if(sum==temp)
        return 1;
}
