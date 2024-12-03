#include "global.h"
int player(char *nickname, int sizename)
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
  printf("Hi, %s\n", nickname);

  return 0;
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
