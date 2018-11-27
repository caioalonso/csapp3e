#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
	int i;
	for (i=0; i<len; i++) {
		printf(" %.2x", start[i]);
	}
	printf("\n");
}

void show_short(short x) {
	show_bytes((byte_pointer) &x, sizeof(short));
}

void show_long(long x) {
	show_bytes((byte_pointer) &x, sizeof(long));
}

void show_double(double x) {
	show_bytes((byte_pointer) &x, sizeof(double));
}

int main(int argc, char *argv[]) {
	printf("short: ");
	short s = 5;
	show_short(s);

	printf("long: ");
	long l = 5;
	show_long(l);

	printf("double: ");
	double d = 5;
	show_double(d);
	return 0;
}
