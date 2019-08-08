#include<stdio.h>
void main()
{
 int a[2][2],b[2][2],i,j;
 int c[2][2];
 printf("enter matrix a elements");
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
    scanf("%d",&a[i][j]);
   }
 }
printf("enter matrix B elements");
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
    scanf("%d",&b[i][j]);
   } 

  }

 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
   c[i][j]=+a[i][j]+b[i][j];
   }
  }
for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
  printf(" %d",c[i][j]);
  }
  printf("\n");
 }
}
 
