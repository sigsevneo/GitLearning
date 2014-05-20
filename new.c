#include "stdio.h"

int main()
{
	/* code */
	printf("I am doing this after a long time!\n");
	printf("Enter any 5 numbers\n");

	int a[5];
	for(int i=0;i<5;i++)
		scanf("%d",&a[i]);

	for(int i=1;i<5;i++)
	{
		int j=i-1,temp=a[i];
		while((a[j]>temp)&&j>=0)
		{	a[j+1]=a[j];
			j--;
		}
		
		a[j+1]=temp;
	}

	for (int i = 0; i < 5; ++i)
	{
		/* code */
		printf("%d ",a[i]);
	}
	return 0;
}