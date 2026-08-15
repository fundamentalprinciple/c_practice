#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char name[12];
	int score;	
} Player;

int main() {
	Player player1;
	Player player2;

	strcpy(player1.name, "Bekoof");
	player1.score = 12;

	strcpy(player2.name, "Babada");
	//player2.name = "Babada";
	player2.score = 13;

	printf("%s, %d\n", player1.name, player1.score);
	return 0;	
}
