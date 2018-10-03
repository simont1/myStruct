#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct pokemon {char * name; int hp;};

int healthgen(){
  srand(time(NULL));
  int x = rand();
  x = x % 100;
  return x;
}

char* namegen(){
  char a[10] = "aaaaa";
  int ctr = 0;
  while(ctr < 5){
    char x = rand();
    printf("%d\n", x);
    x = (x % 26) + 65;
    *(a+ctr) = x;
    ctr++;
    printf("%d\n", x);
  }
  printf("%s\n", a);
  return a;
}

struct pokemon ditto(){
  struct pokemon *pikachu;
  pikachu->name = namegen();
  pikachu->hp = healthgen();
  printf("%s\n", pikachu->name);
}




int main(){
  ditto();
  return 0;
  
}
