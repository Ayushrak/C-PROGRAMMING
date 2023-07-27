#include<stdio.h>
#include<string.h>
int main(){

    char str1[100],str2[100],temp[100];
    printf("enter the first string");
    gets(str1);
    printf("enter the second string");
    gets(str2);
    printf("before swap function str1=%s and str2=%s\n",str1,str2);
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
    printf("after swap function str1=%s and str2=%s\n",str1,str2);
    return  0;
}