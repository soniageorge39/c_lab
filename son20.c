#include<stdio.h>
void main()
{
 int arr[10][10],r,c,i,j,sum=0;
 printf("enter number of rows and columns-");
 scanf("%d %d", &r,&c);
 printf("enter elemets-");
 for(i=1;i<=r;i++)
 {
  for(j=1;j<=c;j++)
  {
    scanf("%d" , &arr[i][j]);
  }
 }

for(i=1;i<=r;i++)
 {
  for(j=1;j<=c;j++)
   {
	if(i==j)
	{

 		sum=sum+arr[i][j];
	}
   }
 }

printf("sum is %d",sum);
}

