#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "clas.h"

int healthgen(){
  int x = rand();
  x = (x % 90) + 10;
  return x;
}

char* namegen(){
  char *pokes[10] = {"Pikachu", "Rayquaza", "Ivan" ,"Simon", "K","DW","Brown","Voltorb","Pidgey","Rattata"};
  return pokes[(rand()%10)] ;
}

struct pokemon ditto(){
  pikachu.name = namegen();
  pikachu.hp = healthgen();
  return pikachu;
}

void reachStats(){
  printf("Pokemon Name: %s, Pokemon HP: %d\n", pikachu.name, pikachu.hp);
}

void changeHP(int newHP){
  pikachu.hp = newHP;
}

void changeName(char *newName){
  pikachu.name = newName;
}

