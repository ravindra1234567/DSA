#include<stdio.h>
void addition()
{
int i,a[20],b[20],c[20],n;
printf("Enter number of elements to be added= ");
scanf("%d",&n);
printf("Enter element in first array= \n");
for(i=0;i<n;i++)
{
printf("\n\t\t\t");
scanf("%d",&a[i]);
}
printf("Enter element in second array= \n");
for(i=0;i<n;i++)
{
printf("\n\t\t\t");
scanf("%d",&b[i]);
}
printf("Addition result is:-= ");
for(i=0;i<n;i++)
{
printf("\n\t\t\t");
c[i]=a[i]+b[i];
printf("%d  ",c[i]);
}
}
void multiplication()
{
int i,a[20],b[20],c[20],n;
printf("\nEnter number of elements to be multiplied= ");
scanf("%d",&n);
printf("Enter element in first array= \n");
for(i=0;i<n;i++)
{
printf("\n\t\t\t");
scanf("%d",&a[i]);
}
printf("Enter element in second array= \n");
for(i=0;i<n;i++)
{
printf("\n\t\t\t");
scanf("%d",&b[i]);
}
printf("Multiplication result is:- ");
for(i=0;i<n;i++)
{
printf("\n\t\t\t");
c[i]=a[i]*b[i];
printf("%d  ",c[i]);
}
}
int  main()
{
addition();
multiplication();
return 0;
}
