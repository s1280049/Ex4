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

return 0;
}
