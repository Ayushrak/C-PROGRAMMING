#include<stdio.h>
#include<stdlib.h>
int main(int argc , char *argv[])
{
    int sum;
    if(argc != 3)
    {
        printf("wrong no of argruments");
        exit(1);
    }
    sum = atoi(argv[1])+atoi(argv[2]);
    printf("sum = %d\n",sum);
    return 0;
}