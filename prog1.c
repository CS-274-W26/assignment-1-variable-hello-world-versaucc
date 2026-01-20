#include <stdio.h> // Necessary for printf()

// TODO Other includes
#include <stdlib.h>
#include <time.h>

int main() {
	// The main function is the entrypoint of the program. When the program
	// is executed, it will automatically start here.
	
	// TODO Complete the program
	
	// Random number seed 
	srand(time(NULL)); 

	// Sample a random int 0-10
	int random = rand() % 11;

	if (random >= 0 && random <= 5) {
		printf("Eat more beef, kick less cats \n");
	} else if (random >= 5 && random <= 9) {
		printf("FRODO LIVES\n");
	} else if (random == 10){
		printf("Larn is the best rougelike\n");
	}

	// Print random number for verification
	printf("The random number was %d\n", random);

	return 0;  
	
}
