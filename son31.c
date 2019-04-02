#include<stdio.h>
struct stud
{
    char name[50];
    int rollno;
    int m1;
    int m2;
    int m3;
    int m4;
    float avg;
}s[100];
void main()
{
    int n,ch,a[100],x,top,count=0;
   
    printf("enter the number of students:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf(" enter the roll no\n");
        scanf("%d",&s[i].rollno);
        printf(" enter the name \n");
        scanf("%s",s[i].name);
        printf(" enter the mark=");
        scanf("%d",&s[i].m1);
        printf(" enter the mark=");
        scanf("%d",&s[i].m2);
        printf(" enter the mark=");
        scanf("%d",&s[i].m3);
        printf(" enter the mark=");
        scanf("%d",&s[i].m4);
        s[i].avg=(s[i].m1+s[i].m2+s[i].m3+s[i].m4)/4;
    }
        printf("1.insert student details\n 2.failled students\n 3.class topper\n enter the choice");
    scanf("%d",&ch);
    if(ch==1)
    {
        for(int i=0;i<n;i++)
        {
          a[i]=0;
          printf("enter the name of the student:");
          scanf("%s",s[i].name);
          printf("enter the roll no:");
          scanf("%d",&s[i].rollno);
          printf("enter the students 5 marks:");
          scanf("%d%d%d%d",&s[i].m1,&s[i].m2,&s[i].m3,&s[i].m4);
        }
    }
    else if(ch==2)
    {
        for (int i=0;i<n;i++)
        {
          if(s[i].m1<25||s[i].m2<25||s[i].m3<25||s[i].m4<25)
            {
            count=count+1;
            printf("failed student name is %s",s[i].name);
            printf("\n");
            }
        }
    }
    else
{
	for (int i=0;i<n;i++)
	{
        a[i]=s[i].m1+s[i].m2+s[i].m3+s[i].m4;
	}
        top=a[0];
        for(int i=0;i<n;i++)
        {
          if(top<a[i])
            {
            top=a[i];
		x=i;
            }
        }
 printf("the class topper is %s",s[x].name);
}
}

