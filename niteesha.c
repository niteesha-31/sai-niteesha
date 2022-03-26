#include<stdio.h>
int main()
{
int a,b;
float c;
char op;
printf("Enter two numbers");
scanf("%d%d",&a,&b);
printf("enter choice");
printf("+ for addition");
printf("- for substraction");
printf(" * for multiplication");
printf(" / for division");
printf("%% for mod");
scanf(" %c", &op);
if(op == '+')
{
c=a+b;
}
else if (op =='-')
{
c=a-b;
}
else if (op=='*')
{
c=a*b;
}
else if (op=='/')
{
if(b==0)
{
printf("Enter non zero");
}
else
{
c=a/b;
}
}
else if (op=='%')
{
if(b==0)
{
printf("enter non zero");
}
else
{
c=a%b;
}
}
else
{
printf("give correct choice");
}
printf("output is %f",c);
return 0;
}

