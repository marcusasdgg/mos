#include <stdio.h>

#include <kernel/tty.h>

//entry point of our kernel
void kernel_main(void) {
	terminal_initialize();
	printf("Hello, kernel World!\nhello next line\n\nhello gap\n");
}
