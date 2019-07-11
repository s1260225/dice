#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int i;

void dice(){
  int DICE[2];
  srand((unsigned int)time(NULL));
  printf("Rolling the dice ...");
  for(i = 0; i < 2; i++){
    DICE[i] = rand()%6 + 1;
    printf("Die %d: %d\n",i+1,DICE[i]);
  }
  printf("Total value :%-3d\n",DICE[0] + DICE[1]);
  if(DICE[0]+DICE[1]>7)printf("You won");
  else printf("You lost");
}
int main(){
  dice();
  return 0;
}
