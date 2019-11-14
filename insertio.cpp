#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
node *rear='\0';
node *front='\0';
node* createnewnode()
{
int a;
node *p;
printf("Enter value in a queue  ");
scanf("%d",&a);
p=(node*)malloc(sizeof(node));
p->data=a;
p->next='\0';
return p;
}
void insertion_a_queue()
{
node *temp;
temp=createnewnode();
if(rear=='\0')
{
rear=front=temp;
}
else
{
rear->next=temp;
rear=temp;
}
}
void deletion()
{
node *temp;
int value;
temp=front;
front=front->next;
value=temp->data;
free(temp);
printf("  %d  ",value);
}
void display()
{
	node *hh;
	int i=1;
	hh=front;
	while(hh!='\0')
	{
	printf("\n node no. %d %d",i,hh->data);
	i++;
	hh=hh->next;
	}
}
void main()
 {
	insertion_a_queue();
	insertion_a_queue();
	insertion_a_queue();
	insertion_a_queue();
	insertion_a_queue();
	insertion_a_queue();
	printf("\nRESULT THE QUEUE\n");
	display ();
	printf("\n\n deleted value from the queue \n\n");
	deletion();
	deletion();
	deletion();
	display();

 }
