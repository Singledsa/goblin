#include "global.h"

int main()
{
  int player_gold = 0;
  char action;
  char nickname[10];

  hello(nickname, sizeof(nickname));

  printf("Hi, %s! What do you want to do today? "
      "Go to the forest to 'h'unt goblins or drink ale 't'avern?\n", nickname);
  action = getchar();
  printf("You attacked by goblin! To attack 'A' or 'R' to run away 'R'\n");
	
//	action = getchar();
	while (action != 'q') 
	{
//Attack goblin?
		if (action == 'H' || action == 'h')
		{
      player_gold = battle(player_gold);
	  }		
    else if (action == 't')
      player_gold = tavern(player_gold);
		printf("Next action? 'H'unt or 't'avern?\n");
		getchar();
		action = getchar();
	}

//Run away
	if (action == 'Q' || action == 'q')
      printf("You earned %d gold! See you tomorrow!\n", player_gold);
	return 0;
}

