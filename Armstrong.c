#include<stdio.h>
#include<math.h>

int isArmstrong(int);

int main()
{
    int n;
    int p;

    while(1)
    {
    printf("Enter n: ");
    scanf("%d",&n);

    p = isArmstrong(n);

    if(p == 1)
        printf("Armstrong\n");
    else
        printf("not Armstrong\n");
    }

    return 0;
}

int isArmstrong(int n)
{
    int rem;
    int sum = 0;
    int temp = n;
    int count = 0;

    while(n)
    {
        count++;
        n = n / 10;
    }

    n = temp;

    while(n)
    {
        rem = n % 10;
        sum = sum + pow(rem, count);
        printf("%d\n",sum);
        n = n / 10;
    }

    if(sum == temp)
        return 1;
    else
        return 0;
}
