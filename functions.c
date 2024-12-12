#include "global.h"
int hello(char *nickname, int sizename)
{
  int len;
  char c;

  printf("What is your name?\n");
  fgets(nickname, sizename, stdin);
  len = strlen(nickname);
  if (nickname[len - 1] == '\n')
    nickname[len - 1] = '\0';
  else
  {
    while((c = getchar()) != '\n' && c != EOF)
      ;
  }

  return 0;
}

int tavern(int player_gold)
{
  int ale_mug_cost = 3;
  if (player_gold >= 3)
  {
  player_gold -= ale_mug_cost;
  printf("You bought mug of ale for %d gold. "
      "Now you have %d gold.\n", ale_mug_cost, player_gold);
  }
  else printf("You don't have enougth gold to buy an ale: \n");

  return player_gold;

}

int battle(int player_gold)
{
  srand(time(NULL));

  int goblin_gold = rand() % 15;
	for (int goblin_hp = 3; goblin_hp >= 0; goblin_hp--)
  	{
			if (goblin_hp > 0 && goblin_hp != 3)
					printf("You hit the goblin! Goblin's HP: %d!\n", goblin_hp);
  
      if (goblin_hp == 0) {
					//Defeat goblin	
					printf("You defeat the goblin!\n");
					//Get gold
			                player_gold += goblin_gold;
					printf("You get %d gold! You have %d. \n", goblin_gold, player_gold);
			}				
		}
	return player_gold;
}
