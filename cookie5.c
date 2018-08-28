#include<stdio.h>
#include<math.h>
int main()
{
	double  a,b,c,numRoots;
	printf("Enter 'a': ");
	scanf("%lf",&a);
	printf("Enter 'b': ");
	scanf("%lf",&b);
	printf("Enter 'c': ");
	scanf("%lf",&c);

	numRoots=pow(b,2)-4*a*c;

	if(numRoots<0)
	{
		printf("no root\n");
	}
	else if(numRoots==0)
	{
		double r1;
		r1=-(b/(2*a));
		printf("Single root: %.1lf\n",r1);	
	}
	else
	{
		double r1,r2;
		r1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
		r2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
		printf("Two roots: %.1lf,%.1lf\n",r1,r2);
	}
	

	

	return 0;
}
