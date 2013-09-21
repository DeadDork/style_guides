////////////////////////////////////////////////////////////////////////////////
// Comments

// This is a simple C program that demonstrates my preferred C coding style.

////////////////////////////////////////////////////////////////////////////////
// Libraries

#include <stdio.h>
#include <math.h>

////////////////////////////////////////////////////////////////////////////////
// Symbolic Constants

#define HRNG 1834 // Human Random Number Generator value

////////////////////////////////////////////////////////////////////////////////
// Macros

#define PrintExpr(x) (printf("PrintExpr:\n\t%s = [%d]\n", #x, (x)))

////////////////////////////////////////////////////////////////////////////////
// Enums

typedef enum boolean {
	FALSE,
	TRUE
} Bool;

////////////////////////////////////////////////////////////////////////////////
// Structs

typedef struct point {
	int x;
	int y;
} TwoD;

////////////////////////////////////////////////////////////////////////////////
// External Variables

int x = 1; // The first integer to add in the print_test function.

////////////////////////////////////////////////////////////////////////////////
// Function Prototypes

// Prints out x + y + z twice:
//// 1) Prints the sums of the input in the argument section of printf().
//
//// 2) Does the same as (1), but lets a macro do the "heavy" lifting instead.
void print_test(int, int);

////////////////////////////////////////////////////////////////////////////////
// Functions

void print_test(int y, int z) {
	printf("printf:\n\tx + y + z = [%d]\n", x + y + z);
	PrintExpr(x + y + z);
}

////////////////////////////////////////////////////////////////////////////////
int main(void) {
	int *y, z;
	TwoD p;
	Bool v;

	// Sets y & z {{{
	// Set y
	for (*y = 0; *y < 9; ++(*y));

	// Set z
	while (z != 90) {
		if (z < 80)
			z = z + 10;
		else if (z >= 80)
			++z;
		else if (z > 90)
			--z;
	}
	// }}}

	// Print x + y + z
	print_test(*y, z);

	// Print the result of an arbitrary, complex expression
	printf("%f\n", 3 + 4 * sin(fabs(HRNG)) * (log(10) / pow(2, 3)));

	// Does--or doesn't--print, depending on the default value
	if (v)
		printf("Looks like the default is TRUE!\n");
	else
		printf("Looks like the default is FALSE!\n");

	// Prints the value of a point
	printf("Point p:\n\tp.x = %d\n\tp.y = %d\n", p.x, p.y);

	return 0;
}
