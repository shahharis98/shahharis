#include <stdio.h>
#include <stdlib.h>
#define N 5
int stack[N];
int top=-1;

void push()

{
	int x;
	printf("enter the data");
	scanf("%d",&x);
	if(top==N-1)
	{
		printf("overflow");
		
	}
	else
	{
		top++;
		
		stack[top]=x;
	}
}
void pop()
{
	int item;
	 if(top==-1)
	 {
	 	printf("underflow");
	 	
	 }
	 else
	 {
	 	item=stack[top];
	 	top--;
	 	printf(" popped element is %d",item);
	 }
}
void peep()
{
	if(top==-1)
	{
		printf("list is emty");
		
	}
	else
	{
		printf("%d",stack[top]);
	}
}
void display()
{
	int i;
	for(i=top;i>=0;i--)
	{	
		printf("%d",stack[i]);
	}
}
void main()
{
int ch;
do{
	printf(" enter the choice:1.push 2.pop 3.peek 4.display");
	
scanf("%d",&ch);
switch(ch)
{
	case 1:push();
	break;
	case 2:pop();
	break;
	case 3:peep();
	break;
	case 4:display();
	break;
	default :
		printf("invalid");
}
}
while(ch!=0);
}
