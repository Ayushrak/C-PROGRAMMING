#include<stdio.h>
int main(){
    char ch;
    printf("\n enter a character");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='u'||ch=='i'||ch=='o'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("\n character is vowel ");
        else
        printf("\n character is not a vowel");
}
