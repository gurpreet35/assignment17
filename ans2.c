// . Write a program to count the occurrence of a given character in a given string.
#include<stdio.h>

int main(){
    int l,flag=0,count=0;
    char item,s[100];
    printf("Enter Your Name:");
    fgets(s,50,stdin);
    printf("ENter your character u want to search:");
    scanf("%c",&item);
    for (l = 0;s[l]; l++)
    {
       if(item==s[l]){
        count++;
        flag=1;
       }
  
    }
    
 if(flag==1)
    printf("The occurrence of \"%c\" in a your name is:%d",item,count);
    else
    printf("No Character Found!");
    return 0;
}