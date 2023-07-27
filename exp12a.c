#include<stdio.h>
#include<ctype.h>
int main()
{
    FILE *fptr;
    char ch;
    fptr = fopen("mydata.txt","w");
    printf("enter some line of text");
    while(ch = getchar()!='~')
    fputc(ch,fptr);
    fclose(fptr);
    fptr = fopen("myfile.txt","r");
    while(!feof(fptr))
    {
        ch = fgetc(fptr);
        putchar(toupper(ch));
    }
    fclose(fptr);
    return 0;
}