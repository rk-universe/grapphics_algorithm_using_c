#include<stdio.h>
#include<conio.h>

struct node{
int data;
struct node*next;
}
struct node* head;
head=NULL;
void insert()
{int d;
printf("ENter the data")
scanf("%d",d)
struct node *newnode *temp;
newnode=(struct node*)makkoc(sizeof(struct node);
newnode->data=d;
newnode->next=NULL;
if(head==NULL)
{
head=newnode;
temp=newnode;
}
else
{
temp->next=newnode;
}


}



int main()
{
do{
int c;
printf("what you want to do")
printf("1 insert node")
printf("2 insert node at nth position")
printf("3 Exit")
scanf("%d",c)
switch(c)
{
case 1:
	{
		void insert();
	}
case 2:
	{
		void insertAtNth();
	}

}while(c!=3)


}
