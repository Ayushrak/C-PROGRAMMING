#include<stdio.h>
#include<string.h>
int main(){
     typedef struct pokemon{ //user defined data type
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
     } pokemon ;
    pokemon a,b,c;
    a.hp=100;
    a.attack= 100;
    a.speed=90;
    a.tier='s';
    strcpy(a.name,"blastoriaste");

    b=a; // b me bhi  a aa gya
    b.attack = 200;
    strcpy(b.name,"venusaur");
    printf("%d\n",a.attack);
    return 0;
}