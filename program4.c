#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 
void insert(int);
int delet();
void display();

int front=-1;
int rear=-1;
int queue[10];
int x;

int main()
{
	int n,ch;
	
	while(1)
	{
		printf("\nEnter 1.insert, 2.delete, 3.display, 4.exit\n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: printf("\n Enter element to be inserted:");
			          scanf("%d",&n);
			          insert(n);
			          break;
			
			case 2: n=delet();
			         printf("\n Element deleted is:%d",n);
			         break;
			      
			case 3:  display();
			          break;
			
			case 4:  exit(0);
			
			default: printf("please enter valid keyword\n");
			         break;		  	     
	    }
	    
    }
    
}
    void insert(int x)
    {
    	if(rear==9)
    	{
    		printf("overflow\n");
		}
		else if(front<0)
		{
			front++;
			rear++;
			queue[rear]=x;
			printf("\n   Element is inserted\n");
		}
		else
		{
			rear++;
			queue[rear]=x;
			printf("\n   element is inserted\n");
		}
	}
	
	int delet()
	{
		if(front<0)
		{
			printf("underflow\n");
			return 0;
		}
		else if(front==rear)
		{
			x=queue[front];
			front=-1;
			rear=-1;
			return x;
		}
		else
		{
		x=queue[front];
		front++;
		return x;
	    }
			
	}
	
	
    void display()
    {
    	int i;
    	printf("\nelements of queue are\n");
    	for(i=front;i<=rear;i++)
    	{
    		printf("%d\n",queue[i]);
		}
	}
	
