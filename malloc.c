#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr = (int *)malloc(5*sizeof(int));

    ptr[0]=1;
    ptr[1]=3;
    ptr[2]=5;
    for(int i=0;i<3;i++){
        printf("%d\n",ptr[i]);
        free(ptr);
    }


}