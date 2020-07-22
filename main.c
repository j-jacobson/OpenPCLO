/* 

Title: OpenPCLO v0.1
Authors: Jonathan Jacobson
Github: https://github.com/j-jacobson/OpenPCLO

*/

#include <stdio.h>
#include <string.h>
#include <intro.c>
//#include <OpenPCLO_modes.h>

#define GAME_LENGTH 30
int main(){

	get_names();
	set_mode(get_mode());

	// begin_synth(); // Start speech synthesis engine

	// begin_buttons(); // Start reading physical buttons, if possible

	play(); // start the game
	end(); // end the game

	return 0;
}

int play(){

	int i = 0;

	do{

		synth(get_challenge(get_order()));
		update_score(get_input());

	}while(i < GAME_LENGTH);

	return 0;
}

int end(){

	synth("Game over.");

	return 0;
}