// Write a program to count vowels in a given string
#include<stdio.h>

int main(){
    int l,flag=0,count=0;
    char s[100];
    printf("Enter Your String:");
    fgets(s,50,stdin);
    for (l = 0;s[l]; l++)
    {
       if((s[l]=='a')||(s[l]=='e')||(s[l]=='i')||(s[l]=='o')||(s[l]=='u')){
        count++;
        flag=1;
       }
  
    }
    
 if(flag==1)
    printf("The occurrence of vowels in a your string is:%d",count);
    else
    printf("No Character Found!");
    return 0;
}