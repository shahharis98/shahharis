#include<stdio.h>
#include<conio.h>
# define N 5
int queue[N];
int front=-1;
int rear=-1;
void enque()
{
	int x;
	printf("enter the data");
	scanf("%d",&x);
	if(rear==N-1)
	{
		printf("overflow");
		
	}
	else if(front=-1&&rear==-1)
	{
		front=rear=0;
		queue[rear]=x;
			}
			else
			{
				rear++;
				queue[rear]=x;
			}
}
void deque()
{
	if(front==-1&&rear==-1)
	{
		printf("underflow");
		
	}
	else if(front==rear)
	{
		front=rear=-1;
	}
	else
	{
		printf("popped element id %d",queue[front]);
		front++;
}
}
void diplay()
{
	int i;
	if(front==-1&&rear==-1)
	{
		printf("invalid not able to print ");
	}
	else
	{
		for(i=front;i<rear+1;i++)
		printf("%d",queue[i]);
	}
}
	

void peep()

{
	if(front==-1&&rear==-1)
	{
		printf("empty");
		
	}
	else
	{
		printf("%d",queue[front]);
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
                deque();  
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
            		peep();
            		break;
				}
            default:  
            {  
                printf("Please Enter valid choice ");  
            }   
    }
}while(choice!=0);

}
