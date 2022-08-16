// Write a program to reverse a string.
#include<stdio.h>

int main(){
    int l,flag=0,count=0;
    char item,s[100],t[100];
    printf("Enter Your String:");
    fgets(s,50,stdin);
    for (l = 0;s[l]; l++)
    {
        flag=1;
    }
    
 if(flag==1){
    printf("The Length of Name is :%d",l);
 }
for (int i = l-1; i>=0; i--)
{
       t[count++]=s[i];
}

    printf("Your Reverse string is :%s",t);
    return 0;
}