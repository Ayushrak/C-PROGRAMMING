#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[30];
} pokemon;
    
    pokemon arr[10];
    arr[0].attack = 50;
    arr[0].hp = 100;
    arr[0].speed=130;
    arr[0].tier='A';
    strcpy(arr[0].name,"charizard");


    arr[1].attack = 80;
    arr[1].hp = 200;
    arr[1].speed=30;
    arr[1].tier='B';
    strcpy(arr[1].name,"pikachu");

    arr[2].attack = 70;
    arr[2].hp = 90;
    arr[2].speed=40;
    arr[2].tier='R';
    strcpy(arr[2].name,"newtwo");

    for(int i=0;i<3;i++){
        printf(" attack=%d\n",arr[i].attack);
        printf("hp=%d\n",arr[i].hp);
        printf("speed=%d\n",arr[i].speed);
        printf("tier=%c\n",arr[i].tier);
          printf("%s\n",arr[i].attack);
    }
        return 0;
    }



