#include<stdio.h>
#include<string.h>
int main(){
    typedef struct book{
    char name[50];
    int noofpages;
    float price;
    }Book;
    
    Book a;
    Book b;
    Book c;
    Book d;

    a.noofpages=85;
    a.price=50.0;
    strcpy(a.name,"secret seven");

    b.noofpages=55;
    b.price=90.0;
    strcpy(b.name,"shakesphere seven");

    printf("%d\n",a.noofpages);
    printf("%f\n",a.price);
    printf("%s",a.name);
    return 0;
}