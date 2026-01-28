#include<stdio.h>
#include<conio.h>
#include<string.h>
void main() {
char a[50],b[50];
clrscr();

printf("enter the string");
scanf("%s",&a);
strcpy(b,a);
strrev(b);

if(strcmp(a,b)==0)
{
printf("this string is a palindrome");
}
else {
printf("this string is not a palindrome");
}
getch();
}

OUTPUT:
enter the string helooo
this string is not a palindrome
