#include <stdio.h>
#include <stdlib.h>
#define N 5
int front=-1,rear=-1;
int deque[N];
void enque_front(int x)
{
	if(f==0&&r==N-1)||(front=rear+1))
	{
		printf("queue is full");
		
	}
	else if(front==-1&&r==-1)
	{
		front=rear=0;
		deque[front]=x;

	}
	else if(front==0)
	{
		front=N-1;
		deque[front]=x;
	}
	else
	{
		f--;
		deque[front]=x;
	}
}
void enque_rear()

{
	if((front==0&&rear=N-1)||(front==rear+1));
	{
		printf("QUE IS FULL");
		
	}
	else if (front==-1&&rear==-1)
	
	{
		front=rear=0;
		deque[rear]=x;
		
	}
	else if(r==N-1)
	{
		rear=0
		deque[rear]=x;
		
	}
	else
	
	{
		
		rear++;
		deque[rear]=x;
		
	}
}

void display()

{
	int i;
	while(i!=rear)
	{
		printf(" %d "deque[i]);
		i=i+1%N;
		
	}
	printf("%d ",deque[rear]);
}
void front()

{
	printf("%d",deque[front]);
	
}
void rear()'
{
	printf("%d",deque[rear]);
	
}
deque_front()

{
	if(front==-1&&rear==-1)
	
	{
		printf("underflow ");
		
	}
	else if(front=rear)
	
	{
		
		front=rear=-1;
	}
	else if(front==N-1)
	
	{
	front=0;	
	}
	else
	{
		printf("%d",deque[front]);
		front++;
	}
}
deque_rear()

{
	if(front==rear)
	{
		front=rear=-1;
	}
	else if(rear=0)
	{
		printf("%d",)
	rear=N-1;	
	
	
	}
	else
	{
		printf("%d",deque[r]);
		rear--;
	}
	
}
