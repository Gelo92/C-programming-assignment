#include<stdio.h>
#include<math.h>

double  a, b, c ,d;
double f(double z)
{
	return a*pow(z,3) + b*pow(z,2) + c*z + d;
}

double RootOffunction(double x, double y)
{
	if(f(x)*f(y)>0)
	{
		printf("Root doesnt lie between specified points\n");
		return 0;
	}

double m;
while(1)
{
	m= (x*f(y) - y*f(x))/ (f(y)-f(x));
	if(f(m)==0)
	break;
	else if(f(x)*f(m) <= 0)
	y=m;
	else if(f(y)*f(m) <= 0)
	x=m;
}
return m;
}

int main()
{
	double x, y, m;
	printf("Enter x-values for 2 points :");
	scanf("%lf %lf", &x,&y);
	printf("\n a*z^2(3) + b*z^(2) + c*z + d \n");
	printf("Enter coefficient values for a,b,c,d to compute function wanted :");
	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
	m= RootOffunction(x,y);
	printf("\n The root of given function is %lf",m);
	return 0;
}
