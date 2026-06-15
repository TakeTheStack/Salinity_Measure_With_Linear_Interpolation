#include <stdio.h>
#include <stdlib.h>

// structure of data for the math functions P1() and P2()
typedef struct { double salt, freez; }p;

int main() {
	p p1, p2;
	double salt_user, freez_result_farenheit, freez_result_celsius;

	/* P1 - salinity (PPT) and freezing temperature (°F) */
	printf("P1.");
	printf("\nSalinity: ");
	scanf("%lf", &p1.salt);
	printf("\nFreez: ");
	scanf("%lf", &p1.freez);

	/* clear the screen */
	printf("\033[2J\033[1;1H");

	/* P2 - salinity (PPT) and freezing temperature (°F) */
	printf("P2.");
	printf("\nSalinity: ");
	scanf("%lf", &p2.salt);
	printf("\nFreez: ");
	scanf("%lf", &p2.freez);

	/* clear the screen again */
	printf("\033[2J\033[1;1H");

	/* The user choose a salinity measure value for linear interpolation calculation */
	printf("select a salinity measure of your choice\n");
	printf("Salinity Measure - Selected: ");
	scanf("%lf", &salt_user);

	/* Checking if a<b<c or p1.salt<salt_user<p2.salt */
	if (p1.salt < salt_user && salt_user < p2.salt) {
		/* Linear Interpolation Computation */
		freez_result_farenheit = p1.freez + ((salt_user - p1.salt) / (p2.salt - p1.salt)) * (p2.freez - p1.freez);
		freez_result_celsius = (freez_result_farenheit - 32) / 1.8; // Conversion to celsius from farenheit temp - formula = (t°F-32)/1.8
		printf("\n\nThe given salinity measure is %5.3f and the estimate freezing value is %5.3f °F | %5.3f °C\n", salt_user, freez_result_farenheit, freez_result_celsius);
		return 0;
	} else { printf("\n\nSalinity measure value, selected by the user, is not between P1 and P2 salinities values\n"); exit(1); }
}
