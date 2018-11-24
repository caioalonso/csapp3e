#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
	int x;
	float f;
	double d;
	int comp;

	// A. x == (int)(double) x
	// always true because since DBL_MAX is greater than (double)INT_MAX
	// it will never overflow
	//x = INT_MAX;
	//printf("INT_MAX to double: %f\n", (double)x);
	//printf("DBL_MAX: %f\n", DBL_MAX);
	
	// B. x == (int)(float) x
	// false, can be rounded
	x = INT_MAX;
	comp = x == (int)(float) x;
	printf("B. ");
	fputs(comp ? "true" : "false", stdout);
	printf("\n");
	printf("x: %d\n", x);
	printf("(float)x: %f\n", (float)x);
	printf("(int)(float)x: %d\n", (int)(float)x);
	printf("\n\n");

	// C. d == (double)(float) d
	// can be false, float has less range and precision
	d = DBL_MAX;
	comp = d == (double)(float) d;
	printf("C. ");
	fputs(comp ? "true" : "false", stdout);
	printf("\n");
	printf("d: %f\n", f);
	printf("(float)b: %f\n", (float)d);
	printf("(double)(float)f: %f\n", (double)(float)d);
	printf("\n\n");

	// D. f == (float)(double) f
	// always true, double has greater range and precision
	
	// E. f == -(-f)
	// always true, just flips the sign bit
	
	// F. 1.0/2 == 1/2.0
	// true because both operations are done with double-precision
	// floating-point arithmetic
	comp = 1.0/2 == 1/2.0;
	printf("F. ");
	fputs(comp ? "true" : "false", stdout);
	printf("\n\n");

	// G. d*d >= 0.0
	// always true because d*d always gives a positive number of +inf
	
	// H. (f+d)-f == d
	// can be rounded
	d = 1.0;
	f = 1.0e20;
	comp = (f+d)-f == d;
	printf("H. ");
	fputs(comp ? "true" : "false", stdout);
	printf("\n\n");

	return 0;
}
