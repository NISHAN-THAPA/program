#include<stdio.h>
#include<stdlib.h>
struct node
{
int info,priority; 
struct node *next; 
}; 

struct node *start=NULL; 
void insert(int x,int n)
{

struct node *p,*prev;
struct node *newnode;

newnode=(struct node *)malloc(sizeof(struct node)); 
prev=(struct node *)malloc(sizeof(struct node));

newnode->info=x;
newnode->priority=n;
newnode->next=NULL; 



if(start==NULL)
start=newnode;
else if(newnode->priority>start->priority)
{
prev=start;
p=start;

while(p!=NULL && p->priority<=newnode->priority)
{
prev=p;
p=p->next;
}

newnode->next=p;
prev->next=newnode;
}
else
{
newnode->next=start;
start=newnode;
}
} 

{
struct node *p;
if(start==NULL)
printf("List is Empty\n");

else
{
p=start;
start=start->next;
printf("The deleted node is %d\n",p->info);
free(p);
}
} 
void display()
{
struct node *p;
if(start==NULL)
printf("List is Empty\n");

else
{
p=start;
printf("The elements in the link list are\n");
printf("PRIORITY INFO\n");
while(p!=NULL)
{
printf("%d %d\n",p->priority,p->info);
p=p->next;
}
}
} 

void main()
{
struct node *p;
int x,choice,n;
while(1)
{
printf("Enter your choice:\n1.insert as per priority\n2.delete \n3.display\n4.exit\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Enter value to be entered into queue :");
scanf("%d",&x);
printf("Enter priority of the node :");
scanf("%d",&n);
insert(x,n);
break;
case 2:
delete();
break;
case 3:
display();
break;
case 4:
printf("Thank you\n");
exit(0);

default:
printf("Invalid input\n");
}
} 
}

