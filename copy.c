#include<stdio.h>
#include<string.h>
int main(){
    char s1[6]="raghav";
    char s2[6];
    strcpy(s2,s1);
    s2[0]='M';
    printf("%s",s2);
    return 0;
}