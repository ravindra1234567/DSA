#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
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
	node* insert_at_bigning()
{
	node *temp;
	temp=create_new_node();
	temp->next=first;
	first=temp;
}
  node* deletion_at_firstnode()
{
	int value;
	node *temp;
	temp=first;
	first=first->next;
	value=temp->data;
	temp->next='\0';
	free(temp);
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
	temp->next='\0';
	free(ttemp);
}
 node* deletion_at_dezirednode(int u)
{
	int value;
	node *temp;
	node *ttemp;
	temp=first;
	while(temp->next->data!=u)
{
	temp=temp->next;
	}
	temp->next=ttemp->next;
	value=ttemp->data;
	ttemp->next='\0';
	free(ttemp);
 }
	void display()
{
	int i=1;
	node *ll;
	ll=first;
	while(ll!='\0')
{
	printf("%d\n",ll->data);
	ll=ll->next;
	i++;
}
}
	int  main()
{
	int g;
	first=create_new_node();
	insert_at_bigning();
	insert_at_bigning();
	insert_at_bigning();
	insert_at_bigning();
	insert_at_bigning();
	printf("Enter the lucation");
  scanf("%d",&g);
	deletion_at_firstnode();
	deletion_at_lastnode();
	deletion_at_dezirednode(g);
	display();
	return 0;
}
