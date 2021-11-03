#include <stdio.h>

int main(void)
{
	int n = 50;
	int *p = &n;
	printf("n: %i\n", n);
	printf("&n: %p\n", &n);
	printf("*&n: %i\n", *&n);
	printf("p: %p\n", p);
	printf("*p: %i\n", *p);
	printf("&*p: %p\n", &*p);
}
