#include<stdio.h>
#include<stdbool.h>
#include<string.h>
 typedef union pokemon{
        int hp;
        int speed;
        int attack;
        char name[15];
        char tier;
 } pokemon;
int main(){
    pokemon pikachu;
    pikachu.hp = 60;
    pikachu.attack = 70;
    pikachu.speed = 100;
    pikachu.tier = 'A';
   strcpy(pikachu.name,"raichu");
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
     printf("%c\n",pikachu.tier);
     printf("%d\n",pikachu.speed);
     printf("%s\n",pikachu.name);
}