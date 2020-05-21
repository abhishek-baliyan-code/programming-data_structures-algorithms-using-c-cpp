/*
    - #include <string.h>

    - int strlen(const char* s) :- strlen return the length of a string, Excluding the null character.

    - char* strcpy(char* dest, char* src) :- strcpy copy one string to another. The destination must be large enough
                                             to accepts the contents of source string.

    - char* strcat(char* dest, char* src) :- strcat combine two strings and return a pointer to the destination string.
                                             In order for this function to work, you must have enough room in the 
                                            destination to accommodate both strings.

    - int strcmp(const char *s1, const char *s2);
    - int strncmp(const char *s1, const char *s2, size_t n);
                            10                15         4      // only compare first  characters.

        The return values are
            - 0 if both strings are equal.
            - 1 if first string is lexicographically greater than second.
            - -1 if second string is lexicographically greater than first.
*/