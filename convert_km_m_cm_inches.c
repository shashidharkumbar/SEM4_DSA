#include<stdio.h>
#include<math.h>
int main()
{
    double k;
    double m,cm,inches,feet;
    printf("Enter the value in km: \n");
    scanf("%lf",&k);

    m=1000*k;
    cm=m*100;
    inches=cm/2.54;
    feet=inches/12;
    printf("The %.2lf km in meter is %.2lf\n",k,m);
    printf("The %.2lf km in centimeter is %.2lf\n",k,cm);
    printf("The %.2lf km in inches is %.2lf\n",k,inches);
    printf("The %.2lf km in feet is %.2lf\n",k,feet);
}
