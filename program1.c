#include<stdio.h>
#include<conio.h>

//using namespace std;


int main()
{
	
	int a[10],min,t=0,i=0,j=0,n;
		
	printf("Enter no. of array elements:\n");
            scanf("%d",&n);
	   	
	for(i=0;i<n;i++)
	{
		  scanf("%d",&a[i]);
	}
	
	printf("sorted array elements are:\n");
	
	for(i=0;i<n-1;i++)
	{
		min=a[i+1];
		t=i+1;
		   
		for(j=i+1;j<n-1;j++)
		{
		    if(a[j]>a[j+1])
		    {
		    min=a[j+1];
		    t=j+1;
		    }
		}
		
		if(a[i]>min)
		{
			a[t]=a[i];
	        a[i]=min;
		}
	}	
	
	for(i=0;i<n;i++)
	  printf("%d\n",a[i]);
	  
	  return 0;
	  
}	



