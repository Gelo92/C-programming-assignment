#include <stdio.h>
#include <math.h>

main()
{	
	double num1,num2,num3;
	double minimum(int c, int b, int a);
	printf("\n\n Solve the equation c*x*x+b*x+a=0:\n");
	printf("\n Enter num1  : "); scanf("%lf",&num1);
	printf("\n Enter num2  : "); scanf("%lf",&num2);
	printf("\n Enter num3 : "); scanf("%lf",&num3);
	
	minimum(num1,num2,num3);

}

double minimum(int c, int b, int a)
{
double delta; /* determinant of the equation */
if(c!=0)
{ delta = pow(b,2) -4*a*c;
if ( delta < 0)
printf("\n\n There is no real solution to this equation");
else {
printf("\n\nThe solution of this equation is:\n");
printf("x = %lf\n",(-b-sqrt(delta))/(2*c));

}
}
else if(b!=0)
{
printf("\n\nThe solution is\n");
printf("x = %lf\n",(-a)/b);
}
else if (a!=0) printf("\n\nThis is impossible\n");
else printf("\n\nAny real number is a solution\n");

}

