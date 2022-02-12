// c programe to display basic informain

#include<stdio.h>
int main()
{
 int reg;
 char name[20];
 char branch[50];
 char hobbies[50];
 printf("What's your name\n");
 gets(name);
 printf("Tell me your branch name\n");
 gets(branch);
 printf("What are your hobbies\n");
 gets(hobbies);
 printf("Enter your registration number\n");
 scanf("%d",&reg);
 printf(" Your name:%s\n",name);
 printf("Your branch name:%s\n",branch);
 printf("Your hobbies:%s\n", hobbies);
 printf("Your registration number:%d\n",reg);
 return(0);
}
