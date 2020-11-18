#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	
	struct node*next;
};
struct node*front=0;
struct node*rear=0;
void enque()

{
	int x;
struct node*newnode;
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&x);
newnode->data=x;
newnode->next=0;
if(front==0&&rear==0)

{
	front=rear=newnode;
}
else
{
	rear->next=newnode;
	rear=newnode;
}
}
void diplay()

{
struct node*temp;
if(front==0&&rear==0)
{
	printf("list is emtpy");
	
}
else
{
	temp=front;
	while(temp!=0)
	printf("%d",temp->data);
	temp=temp->next;
	}
}
void dequeue()
{
	struct node*temp;
	temp=front;
	if(front==0)
	{
		printf("lisrt is empry");
	}
	else
	{
		printf("dequed elemnent is %d",front->data);
		front=front->next;
		free(temp);
	}
}

void peek()
{
	if(front==0&&rear==0)
	{
		printf("list is emtpty");
	}
	else
	{
		printf("%d",front->data);
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
                enque();  
                break;  
            }  
            case 2:  
            {  
                dequeue();  
                break;  
            }  
            case 3:  
            {  
                diplay();
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
            printf("not available");
         }
}
}

while(choice!=0);
          


}


