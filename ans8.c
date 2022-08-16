// Write a program in C to copy one string to another string
#include<stdio.h>
int main(){
    int l,flag=0,count=0;
    char item,s[100],t[100];
    printf("Enter Your String:");
    fgets(s,50,stdin);
   
for (int i = 0;s[i]; i++)
{
       t[i]=s[i];
}
    printf("Your Copy String is:");
    puts(t);
    return 0;
}