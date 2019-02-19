#include<stdio.h>
void main()
{
 int n,rev=0,temp,r;
 printf("enter the number");
 scanf("%d",&n);
 temp=n;
 while(n>0)
 {
  r=n%10;
  rev=(rev*10)+r;
  n=n/10;
  }
   if(rev==temp)
    printf("no. is pali");
   else
    printf("no is not pali");
}
