#include<string.h>
#include<stdio.h>
void main(){
    char a[20];
    int n;
    printf("Enter the string:");
    gets(a);
    n=strlen(a);
    printf("length of the string:%d",a);
}