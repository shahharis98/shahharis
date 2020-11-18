#include<stdio.h>
#include<stdlib.h>



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
		head->next=head;
		head->prev=head;
	}
	else
	{
		tail->next=newnode;
		newnode->prev=tail;
		newnode->next=head;
		head->prev=newnode;
		
		tail=newnode;
		
	}
	printf("want to add another node");
	scanf("%d",&choice);
}
printf("%d",tail->next->data);

printf("%d",head->prev->data);
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
        }while(temp !=tail->next);
   }
}
void  isertdcllbeg()
{

	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the data ");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(head==0)
	{
		head=tail=newnode;
		newnode->prev=tail;
		newnode->next=head;
		
	}
	else
	{
		newnode->next=head;
		head->prev=newnode;
		newnode->prev=tail;
		tail->next=newnode;
		head=newnode;
	}
}
void inesertdllcend()
{
		struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the data ");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(head==0)
	{
		head=tail=newnode;
		newnode->prev=tail;
		newnode->next=head;
		
	}
	else{
		newnode->prev=tail;
		tail->next=newnode;
		newnode->next=head;
		head->prev=newnode;
		tail=newnode;
	}
}

void DlLinsertNodeAtAny()
{
    int i,pos;
    printf("enter the postiton");
    scanf("%d",&pos);
    struct node * newnode, *temp;
    
    if(head== NULL)
    {
        printf(" No data found in the list!\n");
    }
    else
    {
        temp = head;
        i=1;
        while(i<pos-1 && temp!=NULL)
        {
            temp = temp->next;
            i++;
        }
        if(pos == 1)
        {
           isertdcllbeg();
        }
        else if(temp == tail)
        {
            inesertdllcend();
        }
        else if(temp!=NULL)
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            printf("enter the data");
            scanf("%d",&newnode->data);
            
//next address of new node is linking with the next address of temp node            
            newnode->next = temp->next; 
// previous address of new node is linking with the tmp node            
            newnode->prev = temp;              
            if(temp->next != NULL)
            {
                temp->next->prev = newnode; // n+1th node is linking with new node
            }
            temp->next = newnode; // n-1th node is linking with new node 
        }
        else
        {
            printf(" The position you entered, is invalid.\n");
        }
    }
} 
void deletion_beginning()  
{  
    struct node *temp;  
    if(head == NULL)  
    {  
        printf("\n UNDERFLOW\n");  
    }  
    else if(head->next == head)  
    {  
        head = NULL;   
        free(head);  
        printf("\nNode Deleted\n");  
    }  
    else  
    {  
        temp = head;   
        while(temp -> next != head)  
        {  
            temp = temp -> next;  
        }  
        temp -> next = head -> next;  
        head -> next -> prev = temp;  
        free(head);  
        head = temp -> next;  
        printf("\nNode Deleted\n");  
    }  
}
void deleteend()
{
	 struct node *temp;  
    if(head == NULL)  
    {  
        printf("\n UNDERFLOW\n");  
    }  
    else if(head->next == head)  
    {  
        head = NULL;   
        free(head);  
        printf("\nNode Deleted\n");  
    }  
    else {
    	tail=tail->prev;
    	tail->next=head;
    	head->prev=tail;
    	free(temp);
	}
	
}
void deleteatany()
{
	struct node*temp;
	int pos,i=1,count=1000;
	temp=head;
	printf("emter the position");
	scanf("%d",&pos);
	if(pos<1||pos>count)
	{
		
		
		printf("invalid position");
	}
	else if (pos==1)
	{
		deletion_beginning();
	}
	else
	
	{
		while(i<pos)
		{
			temp=temp->next;
			i++;
		}
		temp->prev->next=temp->next;
		temp->next->prev=temp->prev;
		if(temp->next==head)
		{
			tail=temp->prev;
			free(temp);
		}
		else
		{
		
		free(temp);
	}
	}
	
	
}
int main()
{
	create();
//	isertdcllbeg();
//	inesertdllcend();
//	 DlLinsertNodeAtAny();
//	 deletion_beginning();
//deleteend();

 
 deleteatany();
		displayClList();
}
