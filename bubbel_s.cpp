#include<stdio.h>
void main()
{
	int a[10],temp,n,i,j,pass;
	printf("Enter numbers of array => ");
	scanf("%d",&n);
	printf("Enter elements in array");
	for(i=1;i<=n;i++)
	{
	printf("\n\t\t\t");
		scanf("%d",&a[i]);
	}
	for(pass=1;pass<=n;pass++)
		{
			for(j=1;j<=(n-pass);j++)
			{
				if(a[j]>a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
		printf("\nRESULT OF BUBBLE SORT => ");
	for(j=1;j<=n;j++)
	{

		printf("\t%d",a[j]);
	}
}