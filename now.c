#include<stdio.h>
#include<string.h>
int main()
{
char sentence [50];
int i;
int m=0;
printf("enter a sentence\n");
fgets (sentence ,50,stdin);
for(i=0;i<(strlen (sentence)-1);i++)
{
if(sentence [i]=='  ')
{
m++;
}
printf("number of words are : %d\n\n",m+1);
return 0;
}
}
