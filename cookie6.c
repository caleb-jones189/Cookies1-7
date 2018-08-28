#include <stdio.h>

int main()
{       
	        
       	double  num1=1,num2=2;
	double fnum;

	for(int i=1;i<100;i++)
	{
        	fnum+=1/(num1*num2);
		num1++;
		num2++;
	}		
       	printf("%.5lf\n",fnum);
	return 0;
}       
        
