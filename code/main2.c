#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node*next;
};
struct node*head,*tail;

void create()
{
		int choice=1;
	struct node* newnode;
	while(choice){
	
	newnode=(struct node*)malloc(sizeof(struct node*));
	printf("eneter the data");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(tail==0)
	{
    	head=tail=newnode;
    	tail->next=newnode;
		
	}
	else
	{
	newnode->next=tail->next;
	tail->next=newnode;
	tail=newnode;
	
	
	}
	
	printf("do u want to add another node(0,1)?");
	scanf("%d",&choice);
	
}
}
void displayClList()
{
    struct node *temp;
    int n = 1;

    if(tail== NULL)
    {
        printf(" No data found in the List yet.");
    }
    else
    {
    	temp=tail->next;
    	
        do {
            printf(" Data %d = %d\n", n, temp->data);

            temp = temp->next;
            n++;
        }while(temp !=tail->next);
   }
}
void insertatbeg()
{
	
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the datat");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
if(tail==0)
{
	tail=newnode;
	tail->next=newnode;
	
}
else
{
	newnode->next=tail->next;
	tail->next=newnode;
	
}
	
}
void insert_end()
{
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the datat");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
if(tail==0)
{
	tail=newnode;
	tail->next=newnode;
	
}
else
{
	newnode->next=tail->next;
	tail->next=newnode;
	tail=newnode;
}
}
void insert_at_any()

{
	struct node*newnode,*temp;
	int pos,i=1;
	int count=1000;
	printf("enter the positon ");
	scanf("%d",&pos);
	if(pos<0||pos>count)
	{
		printf("invalid pos");
		
	}
	else if(pos==1)
	{
			insertatbeg();
	}
	else
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter the data");
		scanf("%d",&newnode->data);
		newnode->next=0;
		temp=tail->next;
		while(i<pos-1)
		{
			temp=temp->next;
			i++;
		}
		newnode->next=temp->next;
		temp->next=newnode;
		
		
	}
}
void del_beg()
{
	struct node*temp;
	
	temp=tail->next;
	if(tail==0)
	{
		printf("deletion not possibe");
	}
	else if(temp->next==temp)
	{
	tail=0;
	free(temp);
		
	}
	else
	{
		tail->next=temp->next;
		free(temp);
	}
}
void del_end()
{

struct node *current, *previous;
current=tail->next;    
    if(tail==NULL)  
    {  
        printf("\nUNDERFLOW\n");  
    }  
    else if (current->next == current)  
    {  
        head = NULL;  
        free(current);  
        printf("\nNode Deleted\n");  
    }  
    else   
    {  
          
        while(current ->next != tail->next)  
        {  
            previous=current;  
            current = current->next;  
        }  
        previous->next = current -> next; 
		tail=previous; 
        free(current);  
        printf("\nNode Deleted\n");  
    }  
}  
void del_at_any()
{
	struct node*current,*nextnode;
	int pos,i=1,count=1000;
	current=tail->next;
	printf("enter the position");
	scanf("%d",&pos);
	
	if(pos<1||pos>count)
	{
		printf("invalid postiton");
	}
	else if(pos==1)
	
	{
			del_beg();
	}
	else
	{
		while(i<pos-1)
		
		{
			current=current->next;
			i++;
		}
		nextnode=current->next;
		current->next=nextnode->next;
		free(nextnode);
	}
}
void reverse()
{
	struct node*current,*prev,*nextnode;
	current=tail->next;
	nextnode=current->next;
	if(tail==0)
	{
		printf("list is empty");
	}

else
	{
		while(current!=tail)
		{
			prev=current;
			current=nextnode;
			nextnode=current->next;
			current->next=prev;
			
			
		}
		nextnode->next=tail;
		tail=nextnode;
	}
}

int main()
{
		tail=0;
		create();
			
	//	insertatbeg();
	//	insert_end();
	//	insert_at_any();
//	del_beg();
//	del_end();
//	del_at_any();
	
//	displayClList();
	
		del_at_any();
	displayClList();
}
