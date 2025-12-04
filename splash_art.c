//Group 2 - Assignment2
#include <stdio.h>
#include <ncurses.h>
#include <unistd.h>

//The splash screen that will display when opening the game
int start_art(){


addstr("                     ---------   |    |   -------        |             /\\       |------  \n");
addstr("                         |       |    |   |              |            /  \\      |      | \n");
addstr("                         |       |----|   |-----         |           /    \\     |------  \n");
addstr("                         |       |    |   |              |          /------\\    |      | \n");
addstr("                         |       |    |   |------        |------   /        \\   |------  \n\n\n");

addstr("                                          Press any key to start game.\n");
addstr("                                          Press q to quit.");

refresh();

//If user input is "q", return 1 so that the quit screen can be called
char key = getch();
if (key == 113 || key == 81) {
	clear();
	refresh();
	return 1;
}
clear();
refresh();
return 0;

}

//Splash screen for reaching the end of level 2
int end_art(){

addstr("                     \\     /   /------\\   |      |        |      |   -------   |\\    |\n");
addstr("                      \\   /    |      |   |      |        |      |      |      | \\   |\n");
addstr("                       \\ /     |      |   |      |        |  /\\  |      |      |  \\  |\n");
addstr("                        |      |      |   |      |        | /  \\ |      |      |   \\ |\n");
addstr("                        |      \\------/   \\------/        |/    \\|   -------   |    \\|\n\n\n");

addstr("                                          Press any key to quit.");

refresh();

//Waits for user input before closing screen
getch();
return 0;
}

//Splash screen for when the player pauses the game
int pause_art(){

addstr("                     |-----        /\\       |     |   -------   |------   |-----\\\n");
addstr("                     |     |      /  \\      |     |   |         |         |     |\n");
addstr("                     |-----      /    \\     |     |   -------   |-----    |     |\n");
addstr("                     |          /------\\    |     |         |   |         |     |\n");
addstr("                     |         /        \\   \\-----/   -------   |------   |-----/\n\n\n");

addstr("                                          Press any key to continue.");

refresh();

char key = getch();
if (key == 113 || key == 81) {
	clear();
	refresh();
	return 1;
}
clear();
refresh();
return 0;

}

int quit_art(){

addstr("                                          |--------------------------------|\n");
addstr("                                          |                                |\n");
addstr("                                          |     Press q again to quit.     |\n");
addstr("                                          |                                |\n");
addstr("                                          |--------------------------------|\n");

refresh();

char key = getch();
if (key == 113 || key == 81) {
	clear();
	refresh();
	return 1;
}
clear();
refresh();
return 0;

}
