// Universal {{{
typedef enum bool {
	FALSE,
	TRUE
} Bool;
// Universal }}}

// Main {{{
#include <stdio.h>

Bool random_truth_value_generator(void);

int main() {
	if (random_truth_value_generator())
		printf("It's true!\n");
	else
		printf("It's false!\n");

	return 0;
}
// }}}

// random_truth_value_generator() {{{
#include <stdlib.h>

Bool random_truth_value_generator() {
	srandomdev();
	return (random() % 2 == 1) ? TRUE : FALSE;
}
// }}}
