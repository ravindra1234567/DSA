			#include<stdio.h>
			 int main()
			 {
			 int a[10],i,low,high,n,key,flag,mid;
			 printf("Enter the value of arrya size => ");
			 scanf("%d",&n);
			printf("Enter element in first array= \n");
			for(i=0;i<n;i++)
			{
			printf("\n\t\t\t");
			scanf("%d",&a[i]);
				}
			 printf("Enter the key=> ");
			 scanf("%d",&key);
			 while(low<=high)
			 {
			 low=0,high=n-1,flag=1,mid;
			 mid=(low+high)/2;
			 if(key<a[mid])
			 {
			 high=mid-1;
			 }
			 else if(key>a[mid])
			 {
			 low=mid+1;
			 }
			 else if(key==a[mid])
			 {
			 flag=0;
			 printf("Search is success full");
			 break;
			 }
			 if(flag==1)
			 {
			 printf("Seargh is Not success full");
			 break;
			 }
			 }
			 return 0;
			 }
