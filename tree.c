#include<stdio.h>
#include<stdlib.h>
 struct node *newnode(int a) ;
 void pretraverse(struct node* temp);
  void inOtraverse(struct node* temp);

   void preetraverse(struct node* temp);

 void insert(struct node *temp);
struct node {
struct  node* left;
struct  node* right;
int data;



} *root;

pretraverse(struct node* temp){

if(temp==NULL)
    return 0;
    pretraverse(temp->left);

     pretraverse(temp->right);

     printf("%d",temp->data);



}
preetraverse(struct node* temp){

if(temp==NULL)
    return;
     printf("%d",temp->data);
    preetraverse(temp->left);

     preetraverse(temp->right);





}
inOtraverse(struct node* temp){

if(temp==NULL)
    return;
    inOtraverse(temp->left);
     printf("%d",temp->data);
     inOtraverse(temp->right);





}

 struct node *newnode(int data){

 root=(struct node*)malloc(sizeof(struct node));

   root->data=data;
   root ->left=NULL;
   root->right=NULL;
return (root);
}


int main()
{
     struct node *root  = newnode(1);
     root->left             = newnode(2);
     root->right           = newnode(3);
     root->left->left     = newnode(4);
     root->left->right   = newnode(5);

     printf("\nPostorder traversal of binary tree is \n");
     pretraverse(root);
          printf("\nPreorder traversal of binary tree is \n");

      preetraverse(root);
           printf("\nInorder traversal of binary tree is \n");

       inOtraverse(root);


     return 0;
}




