////////////////////////////////////////////////////////////////////////////////
// Comments

// This is a simple C program that demonstrates my preferred C coding style.

////////////////////////////////////////////////////////////////////////////////
// Global Libraries

#include <stdio.h>
#include <math.h>

////////////////////////////////////////////////////////////////////////////////
// Global Symbolic Constants

#define HRNG 1834 // Human Random Number Generator value

////////////////////////////////////////////////////////////////////////////////
// Global Macros

#define PrintParameterValue(x, y, z) printf("%d + %d + %d = [%d]\n", (x), (y), (z), (x) + (y) + (z))

////////////////////////////////////////////////////////////////////////////////
// Global Enumerations

typedef enum boolean {
	FALSE,
	TRUE
} Boolean;

////////////////////////////////////////////////////////////////////////////////
// Global Structs

typedef struct point {
	int axis_x;
	int axis_y;
} TwoDimension;

////////////////////////////////////////////////////////////////////////////////
// Global Functions

// Prints out the expression & the value of the expression:
//// 1) Uses printf()
//
//// 2) Uses PrintParamenterValue().
void print_test(int, int);

////////////////////////////////////////////////////////////////////////////////

int main(void) {
	int *y, z;

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

	// Print x + y + z, where x is an external variable
	print_test(*y, z);

	// Print the result of an arbitrary, complex expression
	printf("%f\n", 3 + 4 * sin(fabs(HRNG)) * (log(10) / pow(2, 3)));

	// Does--or doesn't--print, depending on the default value
	Boolean truth_value;
	if (truth_value)
		printf("Looks like the default is TRUE!\n");
	else
		printf("Looks like the default is FALSE!\n");

	// Prints the value of a point
	TwoDimension point;
	printf("Point:\n\tpoint.axis_x = %d\n\tpoint.axis_y = %d\n", point.axis_x, point.axis_y);

	return 0;
}

int x = 1; // The first integer to add in the print_test function.
void print_test(int y, int z) {
	printf("%d + %d + %d = [%d]\n", x, y, z, x + y + z);
	PrintParameterValue(x, y, z);
}
