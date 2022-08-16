// Write a program in C to count the total number of alphabets, digits and special 
// characters in a string.
#include<stdio.h>
int main(){
    int alpha=0,digit=0,special=0;
    char s[100];
    printf("Enter the string:");
    fgets(s,100,stdin);
    for (int i = 0;s[i]; i++)
    {
        if(s[i]>='A' && s[i]<='Z'){
            alpha++;
        }
        else if(s[i]>='a' && s[i]<='z'){
            alpha++;
        }
        else if(s[i]>='1' && s[i]<='9'){
            digit++;
        }
        else
        special++;
    }
    printf("The total number of alphabets in string is %d\n",alpha);
    printf("The total number of digits in string is %d\n",digit);
      printf("The total number of special character in string is %d\n",special-1);
    return 0;
}