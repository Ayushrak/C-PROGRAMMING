#include<stdio.h>
#include<string.h>
int main(){
    char s1[]="phsics wallah";
    char s2=*s1;
    s1[0]='M';
    printf("%p",s2);
    return 0;
}
