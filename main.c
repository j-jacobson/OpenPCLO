/* 

Title: OpenPCLO v0.1
Authors: Jonathan Jacobson
Github: https://github.com/j-jacobson/OpenPCLO

*/

#include <stdio.h>
#include <string.h>

#define MAX_SZ 40

int get_names(){
	
	int i = 0;
	
	printf("Enter player names. When finished, press ENTER\n");
	
	/* Get the names of each player one at a time. */
	do{
	
		fgets(name[i], MAX_SZ, stdin);
		if(name[i] == '\n'){
			break;
		}
		i++;
	}

	/* Print the names recieved. */
	printf("Names entered:\n");
	for(j = 0; j < i; j++){
		printf("name[j]\n");
	}

	/* Ask if it is correct */
	printf("Is this correct? (Y/n): ")
	char input = getchar();
	if(input == 'y' || input == 'Y'){
		return 0;
	}
	if(input == 'n' || input == 'N'){
		get_names();
		return 0;
	}
 }