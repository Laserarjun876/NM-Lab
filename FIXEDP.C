#include<stdio.h>
#include<conio.h>
#include<math.h>
#define g(x) (a3*x*x*x+a2*x*x+a0)/(-a1)
float a0,a1,a2,a3;
void main()
{
 float x0,x1,E,Era;
 printf("Enter cofficients for a3,a2,a1,a0 :");
 scanf("%f%f%f%f",&a3,&a2,&a1,&a0);
 printf("Enter the initial guess and Error:");
 scanf("%f%f",&x0,&E);
 while(1)
 {
  x1=g(x0);
  Era=(x1-x0)/x1;
  if(fabs(Era)<E)
  {
   printf("Root is :%f\n",x1);
   break;
  }
  x0=x1;
 }
 getch();
}


