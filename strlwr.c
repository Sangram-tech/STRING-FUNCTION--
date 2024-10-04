#include<string.h>
#include<stdio.h>
void main(){
    char a[20];
    int n;
    printf("Enter the string:");
    gets(a);
    n=strlwr(a);
    printf("lower case:%s",a);

}