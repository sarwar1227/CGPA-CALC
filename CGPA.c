//C Code For Calculating CGPA Of Second Semester Exams of IPU 
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
int credits[12]={4,3,3,3,3,3,3,1,1,1,1,1};
int marks[12];
int grade[12];
char subject[12][35]={"Applied Maths-2","Applied Physics-2","Electronic Devices","Introduction To Programming","Engineering Mechanics","Communication Skills","EVS","AP-2 Lab","ITP Lab","ED Lab","EM Lab","EVS Lab"};
void menu()
{
   char b=219;
   system("cls");
   printf("\n\n\n\n\n\n");
   printf("\t\t   Welcome To GPA Calculator(IPU SEM-2) !!\n");
   printf("\n\t\t\t ->Coded By - SARWAR ALI<-\n");
   printf("\n\t\t\t     Github-sarwar1227\n");
   printf("\n\tCheckout Source Code at:https://github.com/sarwar1227/CGPA-CALC");
   printf("\n\n\t\tPress Enter For Entering Your Marks(Out Of 100)\n\n");
   getch();
   system("cls");
   printf("\n\n\n\n\n\n\n\n\t\t\t\tLOADING...\n\n\t\t\t");
   for(int i=0;i<25;i++)
        {
            printf("%c",b);
            Sleep(25);
        }
    system("cls");
   for(int i=0;i<12;i++)
   {
       printf("\n%d.%s\t:",i+1,subject[i]);
       scanf("%d",&marks[i]);
   }
}
void Grade(int marks[])
{
  for(int i=0;i<12;i++)
  {
      if(marks[i]>=90)
        grade[i]=10;
      else if(marks[i]>=75)
        grade[i]=9;
      else if(marks[i]>=65)
        grade[i]=8;
      else if(marks[i]>=55)
        grade[i]=7;
      else if(marks[i]>=50)
        grade[i]=6;
      else if(marks[i]>=45)
        grade[i]=5;
      else if(marks[i]>=40)
        grade[i]=4;
      else
        grade[i]=0;
  }
}
float GPA(int grade[],int credit[])
{
    float den=0.0,num=0.0,temp;
    for(int i=0;i<12;i++)
    {
       den+=credit[i];
       num+=credit[i]*grade[i];
    }
    temp=num/den;
    return temp;
}
int main()
{
    float gpa;
    char ch,b=219;
    system("color 0e");
    menu();
    Grade(marks);
    gpa=GPA(grade,credits);
    system("cls");
    printf("\n\n\n\n\n\n\n\n\t\t\t\tCALCULATING...\n\n\t\t\t");
    for(int i=0;i<25;i++)
        {
            printf("%c",b);
            Sleep(25);
        }
    system("cls");
    printf("\n\n\n\n\n\n\t\t\tGPA=%0.1f",gpa);
    printf("\n\n\t\t\tPercentage:%0.2f",gpa*10);
    printf("\n\n\tThank You For Using GPA Calculator !! Have A Nice Day");
    printf("\n\n\n\n");
    return 0;
  return 0;
}
