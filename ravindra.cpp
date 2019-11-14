#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
	node *first;
	node* create_new_node()
{
	int a;
	printf("Enter the value");
	scanf("%d",&a);
	node *p;
	p=(node*)malloc(sizeof(node));
	p->data=a;
	p->next='\0';
	return p;
}
	node* insert_at_beginning()
{
	node *temp;
	temp=create_new_node();
	temp->next=first;
	first=temp;
	return 0;
}
void insert_at_desired_place()
{
node *temp;
int b;
printf("\n Choice new node is to be linked");
scanf("%d",&b);
node *ttemp=create_new_node();
temp=first;
while(temp->data!=b)
{
temp=temp->next;
}
ttemp->next=temp->next;
temp->next=ttemp;
}
	void display()
{
	int i=1;
	node *ll;
	ll=first;
	while(ll!='\0')
{
	printf(" %d  ",ll->data);
	ll=ll->next;
	i++;
}
}
	void main()
{
	first=create_new_node();
	insert_at_beginning();
	insert_at_beginning();
	insert_at_beginning();
	insert_at_beginning();
	insert_at_beginning();
	printf(" \n Value in a linklist is :- \n ");
	display();
	printf(" \n Value in a desirednode \n ");
	insert_at_desired_place();
	display();
}
