#include <stdio.h>

int main(void)
{
    char A_string[6] = "Hello";
    int i = 0;

    // length of string
    while (A_string[i] != '\0')
    {
        i++;
    }

    // Initializing B_string. With length of A_string
    char B_string[i];

    i = 0;
    while (A_string[i] != '\0')
    {
        B_string[i] = A_string[i];
        i++;
    }
    B_string[i] = '\0'; // add '\0' in the end of string.

    printf("%s %s\n", A_string, B_string);

    return 0;

}