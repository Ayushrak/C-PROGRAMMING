#include<stdio.h>
int main(){
    int marks[10]={2 , 3 , 4, 63 ,65, 64, 96 ,99 ,85 ,75};
    for(int i=0;i<10;i++){
        if(marks[i]<35){
            printf("%d  ",i);
        }
    }
            return 0;
}