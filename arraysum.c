#include<stdio.h>
void main()
{
	int n,k,sum=0,i;

	scanf("%d",&n);
	scanf("%d",&k);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<k;i++)
	sum=sum+a[i];
	printf("Sum is:%d",sum);
	
	
}
