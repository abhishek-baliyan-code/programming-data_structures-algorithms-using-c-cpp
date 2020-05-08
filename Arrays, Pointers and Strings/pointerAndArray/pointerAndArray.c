// link - https://www.youtube.com/watch?v=1bDNvflkmpw&feature=emb_logo
#include <stdio.h>

int main(void)
{
	int a[12];
	int *ptr;
	a[0] = 1;
	a[1] = 10;
	a[2] = 50;
	// below two statements are same. Because the name of an array is
	// a synonym for the address of the 0th element.
	// ptr = &a[0];
	ptr = a;
	printf("*ptr: %d\n", *ptr);
	ptr = ptr + 1;	// this will point to &a[1]
	*ptr = *ptr + 1;	// *ptr = 10. the value of &a[1]. after this it will 11
	printf("*ptr: %d\n", *ptr);
// 	printf("&a[0]: %d\n", &a[0]);
// 	printf("&a[0]: %p\n", &a[0]);
// 	printf("&a[0]: %p\n", (void *)&a[0]);
// 	printf("&a: %d\n", &a);
// 	printf("&a: %p\n", &a);
// 	printf("&a: %p\n", (void *)&a);
// 	printf("ptr: %d\n", ptr);
// 	printf("ptr: %p\n", ptr);
}