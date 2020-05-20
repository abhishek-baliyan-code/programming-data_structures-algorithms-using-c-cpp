#include <stdio.h>

int main(void)
{
    /* 
        - *a1 is pointing to CONSTANT string. 
            
            - You can't change the string that is pointing. 
              Because it's string is in read-only potion
            
            - But *a1 can point to some thing else
    */
    char *a1 = "Hello World";

    /*
        - a2 is a contant pointer that is pointing to string

            - a2 can't point to anything else
            
            - But the content of a2 can be changed
    */
    char a2[] = "Hello World";
    char a3[6] = "Hello";

    /*
        - sizeof(a1) will give size of pointer which is normally 8.

        - sizeof(a2) will give size of content that is it pointing to. 
          which is "Hello World"  - 12 byte
    */
    printf("%ld %ld\n", sizeof(a1), sizeof(a2));

    a1[1] = 'a';    // Undefined behavior

    a1 = a2;    // It will work. 

    printf("%s",a1);

    // int b1[] = {1, 5};

    // int b2[3] = {1, 2, 3};    

    a2 = a3; // error
}