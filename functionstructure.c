#include<stdio.h>
#include<stdbool.h>
#include<string.h>
 typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char name[15];
        char tier;
 } pokemon;
void fun(pokemon p){
   printf("%d",p.hp);
   return;
}
void change(pokemon p){
    p.hp = 70;
    p.attack = 60;
    p.speed = 110;
    return;
}
int main(){
    pokemon pikachu;
    pikachu.hp = 60;
    pikachu.attack = 50;
    pikachu.speed = 100;
    change(pikachu);
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
   //fun(pikachu);
    return 0;    
}