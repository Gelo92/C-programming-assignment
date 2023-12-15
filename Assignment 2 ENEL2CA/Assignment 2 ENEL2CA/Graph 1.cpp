#include <stdio.h>
#include <stdlib.h>


	

void PredatorPrey(double a, double b, double c, double d, double dt, double t_final, double x0, double y0,FILE *file) // function definition
{
	
	double t, y,x;
	y=y0;
	x=x0;

	file=fopen("Myfile1.txt","w");
	
	
	
	fprintf(file,"Population of Prey      Population of Predators      Current Time  ");
	
	for(t=0; t <t_final; t+=dt)
	{
		x=x+ (dt*(a*x-b*x*y));
		y=y+(dt*(-c*y +d*x*y));
	
		fprintf(file,"\n%.2lf\t                 %.2lf\t                      %.2lf\t\n",x,y,t);

	}
	fclose(file);
}

void PredatorPrey(double a, double b, double c, double d, double dt, double t_final, double x0, double y0,FILE *file); // function declaration

int main()
{
	double dt,t_final;
	FILE *file;

	printf("Enter the change in time:\n");
	scanf("%lf",&dt);
	printf("Enter the final time:\n");
	scanf("%lf",&t_final);
	
	if(file==NULL)
	printf("No File Created");
	else
	printf("File is succesfully created");
	PredatorPrey(1.1,0.4,0.5,0.1,dt,t_final,2,2,file);
	return 0;
}
