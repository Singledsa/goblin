#include "global.h"

int main()
{
  int player_gold = 0;
  char action;
  char nickname[10];

  player(nickname, sizeof(nickname));

  printf("You attacked by goblin! To attack 'A' or 'R' to run away 'R'\n");
	
	action = getchar();
	while (action != 'r') 
	{
//Attack goblin?
		if (action == 'A' || action == 'a')
		{
			printf("You attacked goblin!\n");
      player_gold = battle(player_gold);
	  }		
		printf("Next action? Attack or Run?\n");
		getchar();
		action = getchar();
//Run away
	}
	if (action == 'R' || action == 'r')
		printf("You run away!\n");
	return 0;
}

