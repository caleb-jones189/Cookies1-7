#include <stdio.h>
#include <math.h>
int main()
{
	int  arr[200];

	double sq=sqrt(200);
	int s=sq;


	for(int i=0;i<200;i++)
		arr[i]=1;




	for(int i=2;i<s;i++)
	{
		if(arr[i]==1)
		{
			int mult=0;
			for(int j=pow(i,2);j<200;j=pow(i,2)+mult*i)
			{
				arr[j]=0;
				mult++;
			}
		}

	}
	
	for(int i=2;i<200;i++)
	if(arr[i]==1)
		printf("%d ",i);
	printf("\n");
	



	return 0;
}
