#include <stdio.h>
#include <stdlib.h>

#define N 5
int s1[N],s2[N];
int top1=-1,top2=-1;
int count=0;

void push1(int x)
{
		top1++;
	s1[top1]=x;

}

int pop1()
{
return(s1[top1--]); // pop element from stack2
}

void push2(int x)
{
		top2++;
	s2[top2]=x;
	
}
/* Function to pop an element from stack */
int pop2()
{
return(s2[top2--]); // pop element from stack2
}

void enqueue()
{
int data, i;
printf("Enter the data : ");
scanf("%d", &data);
push1(data); // Push data from stack to the queue
count++;
}

void dequeue()
{
int i;
for (i = 0;i <= count;i++)
{
push2(pop1()); 
}
pop2(); 
count--;
for (i = 0;i <= count;i++)
{
push1(pop2()); 
}}


void display()

{
	int i;

printf("\nQUEUE ELEMENTS : ");
for (i = 0;i <= top1;i++)
{
printf(" %d ", s1[i]);
}

}
void main()
{

int choice;
printf("\nQUEUE USING STACKS IMPLEMENTATION\n\n");
printf("\n1.ENQUEUE");
printf("\n2.DEQUEUE");
printf("\n3.DISPLAY");
printf("\n4.EXIT");
printf("\n");

while (1)
{
printf("\nEnter your choice : ");
scanf("%d", &choice);
switch (choice)
{
case 1:
enqueue();
enqueue();
enqueue();
break;
case 2:
dequeue();
break;
case 3:
display();
break;
case 4:
exit(0);
default:
printf("\nInvalid Choice\n");
}}}

