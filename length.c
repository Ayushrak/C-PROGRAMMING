#include<stdio.h>
#include<string.h>
int main(){
    int i,j=0;
    char name[10];
    printf("enter your name");
    scanf("%s",&name);
    for(i=0;name[i]!='\0';i++){
        j++;
    }
    printf("%d",j);
}