#include<stdio.h>
#include<math.h>
int main()
{
    double x,y;
    double r,phi;
    printf("Enter the co-ordinates(x,y)\n");
    scanf("%lf%lf",&x,&y);

    r=sqrt(x*x+y*y);
    phi=atan(y/x);
    printf("The Carestian co-ordinates are (%.3lf, %.3lf)",x,y);
    printf("\nThe Polar co-ordinates are (%.3lf, %.3lf)",r,phi);
}
