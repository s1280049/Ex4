#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
int diceA, diceB;
srand((unsigned int)time(NULL));

printf("Rolling the dice...\n");
diceA = rand() % 6 +1;
printf("Die 1: %d\n",diceA);
diceB = rand() % 6 +1;
printf("Die 1: %d\n",diceB);
printf("Total value: %d\n",diceA+diceB);

if (diceA+diceB > 7)
{
printf("You won!\n");
}
else printf("You lost!\n");

return 0;
}
