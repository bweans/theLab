//Group 2 -Assignment 2
#ifndef PLAYER_H

//STRUCT START

typedef struct{
        int x;
	int y;
	char symbol;
}Player;

// STRUCT END
Player createPlayer(void);

void drawPlayer(Player p1);

Player moveRight(Player p1);
Player moveLeft(Player p1);
Player moveUp(Player p1);
Player moveDown(Player p1);
#endif
