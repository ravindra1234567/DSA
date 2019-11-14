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
void insert_at_last()
{
  node *temp,*tt;
  tt=first;
  temp=create_new_node();
  while((tt->next)!='\0')
  tt=tt->next;
  tt->next=temp;
}
node* searching()
{
node *temp;
int value,count=1;
temp=first;
printf("\nenter the value for searching");
scanf("%d",&value);
while(temp!='\0')
{
if(temp->data==value)
{
 printf("SEARCH IS SUCCESSFULL");
 printf("\n count of number of location %d ",count);
 return 0;
}
temp=temp->next  ;
count++;
}
printf("search is not found");
return 0;
}
node* updating()
{
node *temp;
int value;
int data;
temp=first;
printf("\nenter the value of update");
scanf("%d",&value);
while(temp!='\0')
{
if(temp->data==value)
{
printf("\nenter the new updated element");
scanf("%d",&data);
temp->data=data;
 return 0;
}
temp=temp->next  ;

}
printf("search is not found");
return 0;
}



  node* deletion_at_firstnode()
{
	int value;
	node *temp;
	temp=first;
	first=first->next;
	value=temp->data;
	printf("\nDeleted value is %d\n",value);
	temp->next='\0';
	free(temp);
	return 0;
}
	node* deletion_at_lastnode()
{
	int value;
	node *temp;
	node *ttemp;
	temp=first;
	while(temp->next->next!='\0')
{
	temp=temp->next;
}
	ttemp=temp->next;
	value=ttemp->data;
	printf("\nDeleted value is %d\n",value);
	temp->next='\0';
	free(ttemp);
	return 0;
}
 node* deletion_at_desirednode(int u)
{
	int value;
	node *temp;
	node *ttemp;
	temp=first;
	while(temp->next->data!=u)
{
	temp=temp->next;
	}
	ttemp=temp->next;
	temp->next=ttemp->next;
	value=ttemp->data;
	printf("Deleted value is %d\n",value);
	ttemp->next='\0';
	free(ttemp);
	return 0;
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
	int  main()
{
	int g;
	first=create_new_node();
	insert_at_beginning();
	insert_at_beginning();
	insert_at_beginning();
	insert_at_beginning();
	insert_at_beginning();

	printf("Value in a linklist is :-\n");
	display();
	printf("\nValue of desired node\n");
	insert_at_desired_place();
	display();
	printf("\nValue of insert last\n");
	insert_at_last();
	display();
   printf("\nDeletion of first element:-\n");
	deletion_at_firstnode();
	display();
	printf("\nDeletion of last element:-\n");
	deletion_at_lastnode();
	display();
	printf("\nDeletion at desired place:-\n");
	printf("\nEnter the value to be deleted:-\n");
	scanf("%d",&g);
	deletion_at_desirednode(g);
	display();
	updating();
	display();
	searching();
   printf("\n");
	display();
	return 0;
}
