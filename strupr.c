#include<string.h>
#include<stdio.h>
void main(){
    char a[50];
    int n;
    printf("Enter the string::");
    gets(a);
    n=strupr(a);
    printf("uppper case:%s",a);

}