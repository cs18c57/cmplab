#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
char input[10];
int i=0,error=0;
void E();
void T();
void Eprime();
void Tprime();
void F();
void main()
{
printf("Enter an expression:\n");
scanf("%s",input);
E();
if(strlen(input)==i&&error==0)
printf("Accepted");
else
printf("Rejected");
}
void E()
{
T();
Eprime();
}
void Eprime()
{
if(input[i]=='+')
{
i++;
T();
Eprime();
}
}
void T()
{
F();
Tprime();
}
void Tprime()
{
if(input[i]=='*')
{
i++;
F();
Tprime();
}
}
void F()
{
if(isalpha(input[i]))
i++;
else if(input[i]=='(')
{
i++;
E();
if(input[i]==')')
i++;
else
error=1;
}
else
error=1;
}
