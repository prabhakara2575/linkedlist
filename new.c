#include<stdio.h>
#include<stdlib.h>
struct list{
int a;
struct list * next;
};
void insert(struct list *head,int n)
{
struct list * node=NULL;
struct list * node1=NULL;
node=head;
int i=n;
while(i>0)
{
if(i==n){
printf("Enter data: ");
scanf("%d",&node->a);
node->next=NULL;
node1=(struct list *)malloc(sizeof(struct list));
i--;
}
else{
node->next=node1;
node=node1;
printf("Enter data: ");
scanf("%d",&node->a);
node->next=NULL;
node1=(struct list *)malloc(sizeof(struct list));
i--;
}
}
}
void insertbefore(struct list **head)
{
struct list * node=NULL;
printf("\n-------Insert Before head-------");
node=(struct list *)malloc(sizeof(struct list));
printf("\nEnter data: ");
scanf("%d",&node->a);
node->next=(*head);
(*head)=node;
}
void insertend(struct list *head)
{
struct list * node=NULL;
struct list * node1=NULL;
printf("\n-------Insert At End-------");
node=head;
while(node->next!=NULL){
node=node->next;
}
node1=(struct list *)malloc(sizeof(struct list));
printf("\nEnter data: ");
scanf("%d",&node1->a);
node1->next=NULL;
node->next=node1;
}
void print(struct list* head)
{
struct list * node=NULL;
node=head;
while(node!=NULL){
printf("%d ",node->a);
node=node->next;
}
}
void main()
{
struct list * head=NULL;
struct list * node=NULL;
struct list * node1=NULL;
head=(struct list *)malloc(sizeof(struct list));
int i,n;
printf("Enter a number: ");
scanf("%d",&n);

insert(head,n);
print(head);


insertbefore(&head);
print(head);

insertend(head);
print(head);

}

