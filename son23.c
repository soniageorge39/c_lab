#include<stdio.h>
void main()
{
 int r,c,i,j,sum=0,arr[10][10];
 int n;
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
 for(i=1;i<=c;i++)
 {
  for(j=1;j<=r;j++)
  {
    printf("%d\t" , arr[j][i]);
  }
printf("\n");
 }

}


