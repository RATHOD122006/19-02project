#include<stdio.h>
int main()
{
	int k=11;
	for(int i=11;i<=15;i++)
	{
		for(int j=11;j<=i;j++)
		{
			printf("%d ",k++);
		}
		printf("\n");
	}
}