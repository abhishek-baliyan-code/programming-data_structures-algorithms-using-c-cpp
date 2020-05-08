#include <stdio.h>

int main(void)
{
	int m = 26, n = 47, *ptr = NULL;
	ptr = &m;
	printf("\n");
	printf("m has the value %d and is stored at %p \n", m, (void *)&m);
	printf("n has the value %d and is stored at %p \n", n, (void *)&n);
	printf("ptr has the value %p and is stored at %p \n", ptr, (void *)&ptr);
	printf("The value of integer pointed to by ptr is %d \n", *ptr);
	return 0;
}