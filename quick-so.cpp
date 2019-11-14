#include<stdio.h>
int q[6];
void quicksort(int first,int last)
{
int low=first;
int high=last;
int mid=(low+high)/2;
int temp,pivot;
pivot=q[mid];
while(low<=high)
{
while(q[high]>pivot)
{
high=high-1;
}
while(q[low]<pivot)
{
low=low+1;
}

if(low<=high)
{
temp=q[low];
q[low]=q[high];
q[high]=temp;
low=low+1;
high=high-1;
}
printf("RESULT =>");
for(int i=1;i<=6;i++)
{
printf("  %d",q[i]);
}
printf("\n");
}
if(first<high)
	quicksort(first,high);
if(last>low)
	quicksort(low,last);
	}
int main()
{
printf("Enter the value in a list\n");
for(int i=1;i<=6;i++)
{
printf("\t\t\t");
scanf("%d",&q[i]);
}
quicksort(1,6);
return 0;
}
