#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct pokemon {char * name; int hp;};
struct pokemon pikachu;

int healthgen();

char* namegen();

struct pokemon ditto();

void reachStats();

void changeHP(int newHP);

void changeName(char *newName);
