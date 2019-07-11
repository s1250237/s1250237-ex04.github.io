#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

  char str[16];
  
  printf("What is your name?\n>");
  scanf("%s",str);
  printf("Hello,%s!\n",str);
  

  int s,t;
  
  srand(time(NULL));

  s = rand()%6+1;
  t = rand()%6+1;

  printf("Rolling the dice...\n");
  printf("Die 1:%d\n",s);
  printf("Die 2:%d\n",t);
  printf("Total value:%d\n",s+t);

  if(s+t>=7) printf("%s won!\n",str);
  else{
    printf("%s lost...\n",str);
    if(s+t==2) printf("But 1+1! You're COOL!\n");
  }

  
  

  return 0;

}
