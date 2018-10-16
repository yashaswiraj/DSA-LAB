#include<stdio.h>
#include<conio.h>


void bublsort(int[],int);


void main()
{
	
	int a[20],i,j,k;
	
	printf("enter the size of array\n");
	scanf("%d",&k);
	
	printf("Enter the array elements:\n");
	
	for(i=0;i<k;i++)
	scanf("%d",&a[i]);
	
	
	bublsort(a,k);
	
	printf("after bubble sorting the array elements are:\n");
	
	for(i=0;i<k;i++)
	printf("%d\n",a[i]);
	
	getch();
	
}

void bublsort(int a[],int n)
{
	int i,j,t;
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j+1]<a[j])
			{
				t=a[j+1];
				a[j+1]=a[j];
				a[j]=t;
			}
		}		
    }
    
}


