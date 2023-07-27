#include<stdio.h>
int main(){
    int x=1;
    while(x==x){
        x=x-1;
        printf("%d ",x);
        x++;
    }
    return 0;
}