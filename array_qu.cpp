#include<stdio.h>
int max=10;
int q[10];
int front=-1;
int rear=-1;
void insertion()
  {
  int z;
  printf("\n Enter the value=");
  scanf("%d\n",&z);
if(rear>(max-1))
	{
	printf("Overflow");
	 }
	else if(front==-1)
	 {
	front++;
	rear++;
	q[rear]=z;
	  }
	else
	  {
		rear++;
		q[rear]=z;
		}

	 }
int deletion()
  {
	int x=0;
	if(rear==-1)
	  {
		printf("Underflow");
		}

	else if(front==rear)
	 {
	  x=q[front];
	front=rear=-1;
	  }
	else
	  {
		x=q[front];
		front++;
		}
		return x;
	 }
void display()
  {
	int i,j;
	i=front;
	j=rear;
	printf("Elements In Queue");
	while(i<=j)
	 {
		printf("\n=>%d\n",q[i]);
		i++;
	 }

	}
void main()
  {
	insertion();
	insertion();
	insertion();
	insertion();
	insertion();
   printf("\n\t\tRESULT \n\n ");
	display();
	int y=deletion();
	printf("Deleted Value is=%d\n", y);
	y=deletion();
	printf("Deleted Value is = %d\n", y);
	display();
	}