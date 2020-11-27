#include <iostream>
#include <cstdlib>

int default_random;
int the_random_number;

void config_random() {
	srand(time(NULL));
}

int random_number(int maximum) {  //This function gives out a random number to the maximum of 'maximum', under the variable name default_random.
	config_random();
	default_random = rand() % maximum;
	return default_random;
}

/* To create a random number generator code that saves the number to a variable of your choice, type the following:
random_number( * Highest random number * );
 * Your chosen variable name * = default_random;

Example:


int main() {
	random_number(10);
	the_random_number = default_random;
	std::cout << the_random_number;
}

*/
