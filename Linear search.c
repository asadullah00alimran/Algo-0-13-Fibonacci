#include<stdio.h>
int main()
{
 	int i,n,key,a[100];
	
 	printf("Enter Array length : ");
 	scanf("%d",&n);
	
 	for(i=0; i<n; i++)
 	{
	 scanf("%d",&a[i]);
 	}
	
 	printf("Enter Search key : ");
	scanf("%d",&key);
 
	for(i=0; i<n; i++)
 
	{
 
	if(a[i]==key)
 	{
 	printf("Found at : %d Location",i);
 	break;
	}
 	}
 	if(i==n)
 	{
 	printf("Not Found!");
 	}
 }

