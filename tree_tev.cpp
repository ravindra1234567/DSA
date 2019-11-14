#include<stdio.h>
#include<stdlib.h>
struct tnode
{
int data;
struct tnode *right,*left;
};
tnode *root;
tnode* createnewnode(int z)
{
    tnode *p;
    p=(tnode*)malloc(sizeof(tnode));
    p->data=z ;
    p->left=p->right='\0';
    return p;
}
void build_bst()
{
    int z;
    tnode *temp,*tt,*s;
    printf("Enter value in a tree => ");
    scanf("%d",&z);
    temp=createnewnode(z);
    tt=root;
    while(tt!='\0')
    {
        if(z<tt->data)
        {
            s=tt;
            tt=tt->left;
        }
        else
        {
            s=tt;
            tt=tt->right;
        }
    }
    if(z<s->data)
    {
        s->left=temp;
    }
    else
    {
        s->right=temp;
    }
}
void inorder(tnode *r)
{
if(r!='\0')
inorder(r->left);
if(r!='\0')
printf(" %d ",r->data);
if(r!='\0')
inorder(r->right);
}
void preorder(tnode *r)
{
if(r!='\0')
printf(" %d ",r->data);
if(r!='\0')
preorder(r->left);
if(r!='\0')
preorder(r->right);
}
void postorder(tnode *r)
{
if(r!='\0')
postorder(r->left);
if(r!='\0')
postorder(r->right);
if(r!='\0')
printf(" %d ",r->data);
}
int main()
{
int a;
printf("Enter first element in a root => ");
scanf("%d",&a);
root=createnewnode(a);
build_bst();
build_bst();
build_bst();
build_bst();
build_bst();
build_bst();
printf("\n RESULT \n");
printf("\n Inorder traversal  \n");
inorder(root);
printf("\n Preorder traversal \n");
preorder(root);
printf("\n Postorder traversal  \n");
postorder(root);

return 0;
}
