#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node*next;
	struct node*prev;
};
struct node*head,*tail;
void create()
{
	struct node*newnode;
	int choice=1;
	while(choice)
	{
	
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the data");
	scanf("%d",&newnode->data);
	newnode->next=0;
	newnode->prev=0;
	if(head==0)
	{
		head=tail=newnode;
		
	}
	else
	{
		tail->next=newnode;
		tail=newnode;
		
	}
	head->next=tail;
	tail->next=head;
	printf("want to add another node");
	scanf("%d",&choice);
}
}
void displayClList()
{
    struct node *temp;
    int n = 1;

    if(head== NULL)
    {
        printf(" No data found in the List yet.");
    }
    else
    {
    	temp=head;
    	
        do {
            printf(" Data %d = %d\n", n, temp->data);

            temp = temp->next;
            n++;
        }while(temp !=head);
   }
}
int main()
{
	create();
	displayClList();
}
