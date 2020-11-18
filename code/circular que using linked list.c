#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct node
{
	int data;
	struct node*next;
	
	
};
struct node*front=0;
struct node*rear=0;
void enqueue()
{
	struct node*newnode;

	int x;
	printf("enter the data");
	scanf("%d",&x);
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=x;
		newnode->next=0;
	if(rear==0)
	{
		front=rear=newnode;
		rear->next=front;
	}
	else
		{
			rear->next=newnode;
			rear=newnode;
			rear->next=front;
		}
		
}
void dequeue() // Delete an element from Queue
{
	struct node* temp;
	temp = front;
	if((rear==NULL)&&(rear==NULL))
	{
	
		printf("\nQueue is Empty");
	}
	else if(front == rear){
		front = rear = NULL;
		free(temp);
	}
	else{
		front = front->next;
		rear->next = front;
		free(temp);
	}
	
	
}

void peek()
{
	if(front==0)
	
	{
		printf("list is empty");
	}
	else
	{
		
		printf("%d",front->data);
	}
	
}
void display()

{
	struct node*temp;
	temp=front;
	if(front==0)
	
	{
		printf("empty");
	}
	else
	{
		while(temp->next!=front)

		{
		
		printf("%d",temp->data);
		temp=temp->next;
	}
		printf("%d",temp->data);
}
}
void main()
{
	int choice;
		do{
		   printf("\n\nChose one from the below options...\n");  
        printf("\n1.enque\n2.deque\n3.Show\n4.Exit\n5.peep");  
        printf("\n Enter your choice \n");        
        scanf("%d",&choice);  
		   switch(choice)  
        {  
            case 1:  
            {   
                enqueue();  
                break;  
            }  
            case 2:  
            {  
                dequeue();
                break;  
            }  
            case 3:  
            {  
                display();
                break;  
            }  
            case 4:   
            {  
                printf("Exiting....");  
                break;   
            }  
            case 5:
            	{
            		peek();
            		break;
				}
            default:  
            {  
                printf("Please Enter valid choice ");  
            }   
    }
}while(choice!=0);

}
