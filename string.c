#include<stdio.h>
int main(){
    char arr[]="college wallah is best  channel";
    int i=0;
    while(arr[i]!='\0'){
    printf("%c",arr[i]);//i[arr]//*(arr+i)//*(i+arr)
    i++;
    }
    return 0;
}