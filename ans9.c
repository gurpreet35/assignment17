// . Write a C program to sort a string array in ascending order.
#include<stdio.h>
int main(){
    int temp,l,flag=0;
    char s[100];
    printf("Enter your string:");
    fgets(s,100,stdin); 
     for ( l = 0;s[l]; l++)
    {
        flag=1;
    }
    
 if(flag==1){
    printf("The Length of Name is :%d",l);
 } 
  for ( int i = 0;i<l; i++)
  {
      for ( int j = 0; j <l-1; j++)
      {
       if (s[j]>s[j+1])
       {
           temp=s[j];
           s[j]=s[j+1];
           s[j+1]=temp;
       }
      }   
  }
       printf("After sorting the string appears like :%s \n",s);
    return 0;
}