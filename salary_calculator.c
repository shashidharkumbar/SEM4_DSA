 #include"stdio.h"
 #include"math.h"
 int main()
 {
     double bs,da,hra,gs;
     printf("Enter the baic salary of the ramesh: ");
     scanf("%lf",&bs);
     da=bs*4.0/10;
     hra=bs*22.0/100;
     gs=bs+da+hra;
     printf("The total gross salary of Ramesh is %.3lf",gs);
 }
