#include<stdio.h>
void main()
{
int a[10],i,flag=1,n,key;
printf("Enter value of array=>");
scanf("%d",&n);
printf("Enter the elements in array\n");
for(i=0;i<n;i++)
{
printf("\t\t\t=>");
scanf("%d",&a[i]);
}
printf("Enter the value of key=>");
scanf("%d",&key);
printf("RESULT=> ");
for(i=0;i<n;i++)
{
if(a[i]==key)
{
flag=0;
printf("Search is success full");
}
}
if(flag==1)
{
printf("Search is not success full");
}
}