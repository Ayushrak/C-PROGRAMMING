#include<stdio.h>
int main(){
        struct pokemon{ //user defined data type
        int hp;
        int speed;
        int attack;
        char tier; // A B C D
    }pikachu,charizard,newtwo;
    // struct pokemon pikachu;
     pikachu.attack = 60;
     pikachu.hp = 50;
     pikachu.speed =  54; 
     pikachu.tier='A';
     printf("%d\n",pikachu.attack);

     //struct pokemon charizard;
     charizard.attack= 89;
     charizard.speed=65;
     charizard.hp=62;
     charizard.tier='B';

     //struct pokemon newtwo;
     newtwo.attack=60;
     newtwo.hp=54;
     newtwo.tier='G';
     newtwo.speed=99;

     printf("%c",newtwo.tier);

    return 0;
}
