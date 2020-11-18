#include<stdio.h>
#include<stdlib.h>                                
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
	printf("want to add another node");
	scanf("%d",&choice);
}
}
void insertAtEnd()
{
    struct node * newNode;

    if(tail == NULL)
    {
        printf("Error, List is empty!\n");
    }
    else
    {
        newNode = (struct node *)malloc(sizeof(struct node));

        scanf("%d",&newNode->data);
        newNode->next = NULL;
        newNode->prev = tail;

        tail->next = newNode;
        tail= newNode;

        printf("NODE INSERTED SUCCESSFULLY AT THE END OF LIST\n");
    }
}

void print()
{
	struct node*temp=head;
	if(head==NULL)
	{
		print("lsit is empty");
		
	}
	else{
		
	temp=head;
	
while(temp!=0)
{
	printf("%d",temp->data);
	temp=temp->next;

}
}
}
 
void insertAtBeginning()
{
    struct node * newnode;

    if(head == NULL)
    {
        printf("Error, List is Empty!\n");
    }
    else
    {
        newnode = (struct node *)malloc(sizeof(struct node));
scanf("%d",&newnode->data);
        newnode->next = head; // Point to next node which is currently head
        newnode->prev = NULL; // Previous node of first node is NULL

        /* Link previous address field of head with newnode */
        head->prev = newnode;

        /* Make the new node as head node */
        head = newnode;

        printf("NODE INSERTED SUCCESSFULLY AT THE BEGINNING OF THE LIST\n");
    }
}
void insert_at_any(int pos)
{
	int i;
	struct node*newnode,*temp;
	if(head==0)
	{
		printf("list is empty");
		
	}
	else
	{
		temp=head;
	i=1;
	while(i<pos-1&temp!=0)
	{
		temp=temp->next;
		i++;
		}	
	
	 if(pos==1)
	{
		insertAtBeginning();
		
	}
	else if(temp==tail)
	{
	insertAtEnd();
		
	}
	else if(temp!=NULL)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter the data");
		scanf("%d",&newnode->data);
		newnode->next=temp->next;
		newnode->prev=temp;
		if(temp->next!=NULL)
		{
			temp->next->prev=newnode;
		}
		temp->next=newnode;
	}
	else
	{
		printf("invalid position");
	}
}
	}
	
void del_beg()
	{
		struct node*temp;
		if(head==0)
		{
			printf("list is empty");
		}
	else
	{
		temp=head;
		head=head->next;
		head->prev=0;
		free(temp);
	}
}
 void deleteFromEnd()
{
    struct node * temp;

    if(head == NULL)
    {
        printf("Unable to delete. List is empty.\n");
    }
    else
    {
        temp= tail;

     tail = tail->prev; // Move last pointer to 2nd last node
        
        if (temp != NULL)
            temp->next = NULL; // Remove link to of 2nd last node with last node

        free(temp);       // Delete the last node
        printf("SUCCESSFULLY DELETED NODE FROM END OF THE LIST.\n");
    }
}

void DlListDeleteAnyNode(int pos)
{
    struct node *temp;
    int i;
 
    temp= head;
    for(i=1; i<pos && temp!=NULL; i++)
    {
        temp = temp->next;
    }
 
    if(pos == 1)
    {
        del_beg();
        
    }
    else if(head == tail)
    {
      deleteFromEnd();
    }
    else if(temp!= NULL)
    {
        temp->prev->next = temp->next;
        temp->next->prev= temp->prev;
 
        free(temp); //Delete the n node
    }
    else
    {
        printf(" The given position is invalid!\n");
    }
} 
void reverseList()
{
    struct node *current, *temp;

    current = head;
    while(current != NULL)
    {
        /*
         * Swap the previous and next address fields of current node
         */
        temp = current->next;
        current->next = current->prev;
        current->prev = temp;

        /* Move the current pointer to next node which is stored in temp */
        current = temp;
    }
    
    /* 
     * Swap the head and last pointers
     */
    temp = head;
    head = tail;
    tail = temp;

    printf("LIST REVERSED SUCCESSFULLY.\n");
}

int main()
{

create();
print();

reverseList();
print();

//DlListDeleteAnyNode(2);

//print();
//	insert_at_any(2);
//		print();
	

	
}
