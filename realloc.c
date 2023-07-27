#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr = (int *)calloc(3,sizeof(int));

    ptr[0]=1;
    ptr[1]=3;
    ptr[2]=5;
    for(int i=0;i<3;i++){
        printf("%d\n",ptr[i]);
    }
    ptr = realloc(ptr,8);
    for(int i=0;i<8;i++){
        printf("%d\n",ptr[i]);
    }
    return 0;
}