//  Write a program to calculate the length of the string. (without using built-in method)
#include<stdio.h>

int main(){
    int l,flag=0;
    char s[50];
    printf("Enter Your Name:");
    fgets(s,50,stdin);
    for (l = 0;s[l]; l++)
    {
        flag=1;
    }
    
 if(flag==1)
    printf("The Length of Name is :%d",l);
    return 0;
}