#include <stdio.h> 
#include "user.h"

// First we need to check for the correct user file. 
int check_user_file(); 

// Front End Functions.
int get_selection(void); 
void clear_screen(int);  
void display_menu(void); 


int main(int argc, char *argv[]) {
	get_selection(); 
}

// Main Menu --} displays the interface screen and returns a selection. 
int get_selection(void) {
	int selection = 0; 

	display_menu(); 
	scanf("%d", &selection); 

	printf("[DEBUG] Selection: %d\n", selection); 
}

void display_menu(void) {
	clear_screen(32); 
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n"); 
	printf("$$$$$$$| MONEY TALKS |$$$$$$$$$\n"); 
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("----------------------------------->\n"); 
	printf("1. Check Balance\n"); 
	printf("2. Deposit\n"); 
	clear_screen(2); 
	printf("->"); 
}; 
	
void clear_screen(int times) {
	for(int i=0; i < times; i++)
		printf("\n"); 
};
