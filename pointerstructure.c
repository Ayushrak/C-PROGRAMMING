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
 void change(pokemon* p){
    p->hp = 85;
    p->attack = 85;
    p->speed = 85;
    // (*p).tier = 'B';
    p->tier = 'B';
    strcpy(p->name,"pikachu");
 }

int main(){
    pokemon pikachu = {60,70,100,'A',"raichu"};
    // pikachu.hp = 60;
    // pikachu.attack = 70;
    // pikachu.speed = 100;
    // pikachu.tier = 'A';
    // strcpy(pikachu.name,"raichu");
    pokemon*x = &pikachu;
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
     printf("%c\n",pikachu.tier);
     printf("%d\n",pikachu.speed);
     printf("%s\n",pikachu.name);
    change(&pikachu);
     printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
     printf("%c\n",pikachu.tier);
     printf("%d\n",pikachu.speed);
     printf("%s\n",pikachu.name);

    return 0;
}