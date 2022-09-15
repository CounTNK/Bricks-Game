#include<stdio.h>
int main()
{
	int a[10],b[10],flag=0,n1,n2,i,j;
	printf("enter array size :");
	scanf("%d",&n1);
	printf("\n enter array 1 element:\n ");
	for(i=0;i<n1;i++)
	scanf("%d",&a[i]);
	printf("enter array size : \n");
	scanf("%d",&n2);
	printf("enter array 2 element : \n");
	for(i=0;i<n2;i++)
	scanf("%d",&b[i]);
	printf("intersection of two arrays :");
	for(i=0;i<n1;i++)
	{ 
	for(j=0;j<n2;j++)
	{if(b[i]==a[j]);
	{flag=1;
	}
	}
	{printf("%d",b[i]);
	}
	flag=0;
	}
	return 0;
    	
}
