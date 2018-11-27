#include <stdio.h>
#include <assert.h>

typedef unsigned char *byte_pointer;

unsigned char first_byte(byte_pointer start) {
	return start[0];
}

int is_little_endian() {
	unsigned int c = 1;
	if(first_byte((byte_pointer) &c) == 0x01) {
		return 1;
	} else {
		return 0;
	}
}

int main(int argc, char *argv[]) {
	assert(is_little_endian());
	return 0;
}
