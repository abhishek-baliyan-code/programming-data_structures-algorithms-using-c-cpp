/*
String: Every string has \0 in the end. A string is the array of characters. 

    - A string constant is a sequence of charecters enclosed in double quotes
        
        - For example, the character string:
        
        char s1[2] = "a";   // Takes two bytes of storage
        s1: a and \0

        - on the other hand, the character, in single quotes:

        char s2 = 'a';      // Takes only one byte of storage.
        s2: a


    - Example 1

        char message1[12] = "Hello World";  // |H|e|l|l|o| |W|o|r|l|d|\0|

        char message2[12];
        scanf("%s", message2);  // type "Hello" as input
        // |H|e|l|l|o|\o|?|?|?|?|?|?|

    - Initializing Strings

        char *message3 = "Hello World";
        printf("%s", message3); // |H|e|l|l|o| |W|o|r|l|d|\0|

        - Message3 is pointer to an array or characters
        - Content of message3 should not be changed
            - message3 point to a sequence of  locations that are "read-only" 
              portion of program that is executing
            - message3[1] = 'a'; // undefind behavior
*/

#include <stdio.h>

int main(void)
{   
    char message1[12] = "Hello World";  // |H|e|l|l|o| |W|o|r|l|d|\0|
    printf("%s\n", message1);

    message1[0] = 'T';
    printf("%s\n", message1);

    char message2[12];
    scanf("%s", message2);  // type "Hello" as input
    printf("%s\n", message2);

    message2[1] = 'K';
    printf("%s\n", message2);

    char *message3 = "Hello World";
    printf("%s\n", message3); // |H|e|l|l|o| |W|o|r|l|d|\0|

    message3[0] = 'a';  // Read only portion
    printf("%s", message3); // Won't work

    return 0;
}