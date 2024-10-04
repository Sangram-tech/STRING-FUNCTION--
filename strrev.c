#include<string.h>
#include<stdio.h>
void main(){
    char a[20];
    char s;
    printf("Enter the string:");
    gets(a);
    s= strrev(a);
    printf("retrive the string:%s",a);
}