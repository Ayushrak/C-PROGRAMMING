#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
     typedef struct date{ //user defined data type
        int date;
        int month;
        int year;
     } date;
    date a,b;
    //a -> 5/12/1993
    //b -> 4/12/2023
    a.date=5;
    a.month= 12;
    a.year=1993;

    b.date=4;
    b.month= 12;
    b.year=2023;

    bool flag = true;
    if(a.date!=b.date) flag = false;
    if(a.month!=b.month) flag = false;
    if(a.year!=b.year) flag = false;
    if(flag==true) printf("the dates are same");
    else printf("the date are different");
    return 0;
}