#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;
    typedef struct legendarypokemon{
        pokemon normal;
        char ability[10];
    } legendarypokemon ;
    typedef struct godpokemon{
        legendarypokemon legend;
        int specialatack;
    } godpokemon;

    godpokemon arceus;
    arceus.specialatack = 300;
    strcpy(arceus.legend.ability,"turn anyone to stone");
    legendarypokemon newtwo;
    strcpy(newtwo.ability,"Pressure");
    newtwo.normal.hp=56;
    newtwo.normal.attack=45 ;
    
    return 0;
}