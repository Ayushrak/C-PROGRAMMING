#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "college wallah";
     char *ptr = str;
     ptr="physics wallah";
     int i=0;
     while(str[i]!='\0'){
         printf("%s",str);
         printf("%s",*ptr); //physics wallah
        ptr++;
        i++;
    }
    return 0;
}