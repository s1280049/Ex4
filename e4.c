#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
int diceA, diceB;
srand((unsigned int)time(NULL));
char name[20];

printf("What is your name? \n> ");
scanf("%s", name);
printf("Hello, %s!\n", name);

printf("Rolling the dice...\n");
diceA = rand() % 6 +1;
printf("Die 1: %d\n",diceA);
diceB = rand() % 6 +1;
printf("Die 1: %d\n",diceB);
printf("Total value: %d\n",diceA+diceB);

if (diceA+diceB > 7)
{
printf("%s won!\n", name);
}
else printf("%s lost!\n", name);

return 0;
}
