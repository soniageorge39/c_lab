#include<stdio.h>
void main()
{
 int a[100],i,t,n,new,j;
 printf("enter elements \n");
 for(i=0;i<10;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("array is\n ");
 for(i=0;i<10;i++)
{
 printf("%d\n",a[i]);
}
for(i=0;i<10;i++)
{
 for(j=0;j<9;j++)
 {
  if(a[j]>a[j+1])
  {
   t=a[j];
   a[j]=a[j+1];
   a[j+1]=t;
  }
 }
}
   printf("sorted array\n");
   for(i=0;i<10;i++)
    
    printf("   %d",a[i]);
printf("enter element to be replaced\n");
scanf("%d",&n);
printf("enter new element\n");
scanf("%d",&new);
for(i=0;i<10;i++)
{
 if(a[i]==n)
 a[i]=new;
}
printf("array is \n ");
for(i=0;i<10;i++)
printf("%d\n",a[i]); 
}
