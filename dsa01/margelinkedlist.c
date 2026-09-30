#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}; 
struct  node * meargelinkedlist(struct node*p1,struct node *p2){
  struct node *ptr=p1;
  if(p1==NULL){
    return p2;
  }
  while(ptr->next!=NULL){
    ptr=ptr->next;
  }
  ptr->next = p2;
  return p1;
}
void traversal(struct node * head){
  struct node *ptr =head;
  while(ptr!=NULL){
    printf("%d \t",ptr->data);
    ptr=ptr->next;
  }
  printf("\n");
}
struct node *create(int data){
    struct node *n=(struct node *)malloc(sizeof(struct node));
    n->data=data;
    n->next=NULL;
    return n;
}
struct node * insertnode(struct node *p1,int data){
    struct node *newnode =create(data);
    if(p1==NULL){
       return newnode;
    } 
   struct node *ptr= p1;
   while(ptr->next!=NULL){
    ptr=ptr->next;
   }
ptr->next=newnode;
return p1;
}
int main() {
  struct node *p1=NULL;
  struct node *p2=NULL;
  p1=insertnode(p1,5);
  p1=insertnode(p1,10);
  p1=insertnode(p1,15);
  p2=insertnode(p2,30);
  p2=insertnode(p2,20);
  p2=insertnode(p2,25);
  traversal(p1);
  traversal(p2);
  meargelinkedlist(p1,p2);
  traversal(p1);
  return 0;
}