#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct pokemon {char * name; int hp;};
struct pokemon pikachu;


int healthgen(){
  int x = rand();
  x = (x % 90) + 10;
  return x;
}

char* namegen(char *s){
  char a[10] = "aaaaa";
  int ctr = 0;
  while(ctr < 5){
    char x = rand();
    printf("old: %d\n", x);
    x = (x % 26) + 65;
    printf("new: %d\n", x);
    *(a+ctr) = x;
    ctr++;
    printf("%d\n", x);
  }
  printf("%s\n", a);
  *s = *a;
  return s;
}

struct pokemon ditto(){
  pikachu.name = namegen(pikachu.name);
  pikachu.hp = healthgen();
  return pikachu;
}



struct pokemon reachStats(){
  printf("%d\n", pikachu.hp);
  printf("%s\n", pikachu.name);
}

int main(){
  srand(time(NULL));
  ditto();
  reachStats();
  return 0;
  
}
