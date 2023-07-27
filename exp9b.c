#include<stdio.h>
#include<string.h>
int main(){
    char str1[20],str2[20],str3[40];
    int len,i;
    printf("enter a string");
    fgets(str1,19,stdin);
    len=strlen(str1);
    strcpy(str2,str1);
    printf("string1 = %s\n",str1);
    printf("string2=%s\n",str2);
    if(strcmp(str1,str2)==0)
        printf("str1 and str2 are same\n");
        strrev(str1);
        printf("now string 1 =%s\n",str1);
        strcpy(str3,str1);
        strcat(str3," ");
        strcat(str3,str2);
        printf("string3=%s\n",str3);
        if(strcmp(str1,str3)==0)
            printf("str1 and str3 are same\n");
        else
            printf("str1 and str3 are not same\n");
            return 0;
}