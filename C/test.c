// This is a simple--and ugly--C program that demonstrates my preferred C coding style.

// Universal {{{
#include <stdio.h>
// Universal }}}

// Main {{{
#include <math.h>

#define RANDOM_NUMBER 1834

typedef enum boolean {
	FALSE,
	TRUE
} Boolean;

typedef struct point {
	int axis_x;
	int axis_y;
} TwoDimension;

void print_add_xyz(int, int);

int main() {
	int *y, z;

	// Sets y & z {{{
	// Set y
	for (*y = 0; *y < 9; ++*y);

	// Set z
	while (z != 90) {
		if (z < 80)
			z += 10;
		else if (z >= 80)
			++z;
		else if (z > 90)
			--z;
	}
	// }}}

	// Print x + y + z, where x is an external variable
	print_add_xyz(*y, z);

	// Print the result of an arbitrary, complex expression
	printf("%f\n", 3 + 4 * sin(fabs(RANDOM_NUMBER)) * (log(10) / pow(2, 3)));

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
// Main }}}

// print_add_xyz() {{{
int x = 1;

#define PrintAddXYZ(x, y, z) printf(#x " + " #y " + " #z " = [%d]\n", (x) + (y) + (z))

void print_add_xyz(int y, int z) {
	printf("%d + %d + %d = [%d]\n", x, y, z, x + y + z);
	PrintAddXYZ(x, y, z);
}
// print_add_xyz() }}}
