#include<stdio.h>
int main(){
    FILE *fptr;
     fptr = fopen("text.txt","r");
     char ch;
     ch = fgetc(fptr);
     while(ch != EOF){
        printf("%c",ch);
        ch = fgetc(fptr);
     }
     printf("\n");
     fclose(fptr);
     return 0;
    // fputc('M',fptr);
    // fputc('A',fptr);
    // fputc('N',fptr);
    // fputc('G',fptr);
    // fputc('O',fptr);
}