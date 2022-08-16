// Write a program to convert a given string into lowercase
#include<stdio.h>

int main(){
    int l;
    char s[100];
    printf("Enter Your String:");
    fgets(s,50,stdin);
    for (l = 0;s[l]; l++)
    {
        if(s[l]>='A' && s[l]<='Z'){
           s[l]=s[l]+32;
        }
    }
    printf("Your lowercase string is :%s",s);
    return 0;
}