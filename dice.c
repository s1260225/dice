#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int i;
char a[10];

void dice(){
  int DICE[2];
  printf("Rolling the dice ...\n");
  for(i = 0; i < 2; i++){
    DICE[i] = rand()%6 + 1;
    printf("Die %d: %d\n",i+1,DICE[i]);
  }
  printf("Total value :%-3d\n",DICE[0] + DICE[1]);
  if(DICE[0]+DICE[1]>7)printf("%s won!\n",a);
  else printf("%s lost\n",a);
}
int main(){
  printf("What is your name?\n");
  scanf("%s",a);
  printf("Hello %s\n",a);
  srand((unsigned int)time(NULL));
  dice();
  dice();
  return 0;
}
