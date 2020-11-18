#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node*link;
	
};
struct node*top=0;
void push()
{
	int x;
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the data");
	scanf("%d",&x);
	newnode->data=x;
	newnode->link=top;
top=newnode;
}
	

void display()
{
	struct node*temp;
	temp=top;
if(top==0)
{
	printf("list is empty");
}
	else
	{
	
	while(temp!=0)
	{
		printf("%d",temp->data);
		temp=temp->link;
	}
}
}
void peep()
{
	if(top==0)
	{
		printf("stack is emty");
	}
	else
	{
		printf("top elements is %d",top->data);
	}
}
void pop()
{
	struct node*temp;
	temp=top;
	if(top==0)
	
	{
		printf("underflow");
	}
	else
	{
		printf("poped  is %d",top->data);
		top=temp->link;
		free(temp);
	}
}

void main()
{
	int choice;
	do{
		   printf("\n\nChose one from the below options...\n");  
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit\n5.peep");  
        printf("\n Enter your choice \n");        
        scanf("%d",&choice);  
		   switch(choice)  
        {  
            case 1:  
            {   
                push();  
                break;  
            }  
            case 2:  
            {  
                pop();  
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
