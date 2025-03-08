#include<stdio.h>
#include<string.h>
void main()
{
    charstr[30],revstr[30];
    int i,len;
clrscr();
printf("\n enter the string");
gets(str);
len=strlen(str);
for(i=0;i<len;i++)
revstr[len-i-1]=str[i];
revstr[len]='\0';
printf("\nthe reverse is %s",revstr);
getch();
}