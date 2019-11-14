#include<stdio.h>
# include<stdlib.h>
struct node
  {
	int data;
	struct node *next;
  };
node *top='\0';
node* create_new_node()
  {
	node *p;
	p=(node*)malloc(sizeof(node));
	 if(p=='\0')
	  {
		printf("Overflow");
		}
	 else
	  {
		int z;
		printf("Enter The Value => ");
		scanf("%d",&z);
		p->data=z;
		p->next=top;
	 }
	return p;
  }
void push()
  {
	node *temp;
	temp=create_new_node();
	top=temp;
  }
int pop()
  {
	int y=0;
	if(top=='\0')
	 {
	  printf("\nUnderflow");
	 }
  else
	 {
	  node *temp;
	  temp=top;
	  y=temp->data;
	  top=temp->next;
	  temp->next='\0';
	  free(temp);
	 }
	return y;
  }
void display()
  {
	 node *tt;
	 tt=top;
	 printf("\nRESULT FROM STACK\n");
	 printf("\nValue In Stack => ");
while(tt!='\0')
	 {
	  printf("%d\t",tt->data);
	  tt=tt->next;
	 }
  }
void main()
 {
	int x;
	push();
	push();
	push();
	push();
	push();
	push();
	display();
	printf("\nRESULT OF POPED VALUE ");
	x=pop();
	printf("\n\t\t =>%d",x);
	x=pop();
	printf("\n\t\t =>%d",x);
	x=pop();
	printf("\n\t\t =>%d",x);
	printf("\nRAMAINDER VALUE IN A STACK" );
	display();


  }