#include<string.h>
#include<stdio.h>
void main(){
    char a [20],b[20];
    int n;
    printf("Enter the string-1:");
    gets(a);
    printf("Enter the string-2:");
    gets(b);
    n=strcpy(a,b);
    printf("copy:%s",a);

}