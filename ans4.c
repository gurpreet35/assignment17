//  Write a program to convert a given string into uppercase
#include<stdio.h>

int main(){
    int l;
    char s[100];
    printf("Enter Your String:");
    fgets(s,50,stdin);
    for (l = 0;s[l]; l++)
    {
        if(s[l]>='a' && s[l]<='z'){
           s[l]=s[l]-32;
        }
    }
    printf("Your uppercase string is :%s",s);
    return 0;
}