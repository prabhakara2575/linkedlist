#include<stdio.h>
void main()
{
	int m,n;
	printf("Enter the no of rows and column:");
	scanf("%d %d",&m,&n);
	int a[m][n]={(0,0)};
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			scanf("%d ",&a[i][j]);
		}

	}

	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");

	}



}
