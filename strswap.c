#include<string.h>
#include<stdio.h>
void main(){
    char a[50],b[50],s[50];
    printf("Enter the character for a:");
    gets(a);
    printf("Enter the string for b:");
    gets(b);
    printf("str1:%s\n",a);
    printf("str2:%s\n",b);
    strcpy(s,a);
    strcpy(a,b);
    strcpy(b,s);
    printf("str1:%s\n",a);
    printf("str2:%s\n",b); 
    

    
}