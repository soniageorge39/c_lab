#include<stdio.h>
#include<string.h>
void main()
{
 int co=0,i;
 char str[100],n;

 printf("enter the string-");
 //scanf("%s",str);
 fgets(str,100,stdin);
 printf("enter the character to check repeatition-");
 scanf("%c",&n);
for(i=0;str[i]!='\0';i++)
 {
  if(str[i]==n)
   { 
     co=co+1;
    }
  }
   printf("count is - %d",co);
}
