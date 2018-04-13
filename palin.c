#include<stdio.h>
int main()
{ int n,k,rem,rev=0;
scanf("%d",&n);
 n=k;
 while(n!=0)
 {
  rem=n%10;
  rev=(rev*10)+rem;
  n/=10;
  }
  if(rev==k)
  printf("yes");
  else
  printf("no");
  return 0;
  }
 
