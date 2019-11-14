#include<stdio.h>
int s[10];
int max=10,top=-1;
void push()
{
int x;

if(top==max-1)
{
printf("Overflow");
}
else
{
printf("Enter value in a stack => ");
scanf("%d",&x);
top=top+1;
s[top]=x;
}
}
void pop()
{
int f;
if(top==-1)
{
printf("Underflow");
}
f=s[top];
top=top-1;
printf("\npoped value of stack => %d\n ",f);
}
void display()
{
int z=top;
if(z==-1)
{
printf("Underflow");
}
else
{
while(z > -1)
{
printf("\n%d",s[z]);
z--;
}
}
}
int main()
{
push();
push();
push();
push();
push();
push();
push();
push();
printf("\nValue from  stack");
display();
printf("\n Result pop value");
pop();
pop();
pop();
pop();
printf(" \n Remainder  value of in stack \n");
display();
return 0;
}
