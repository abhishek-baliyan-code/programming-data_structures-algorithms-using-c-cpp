/*
Reading String

    - scanf("%s", pointer_to_char_array);

*/

#include <stdio.h>

int main(void)
{
    char A_string[80], E_string[80];
    printf("Enter some words in a strinf: \n");
    scanf("%s%s", A_string, E_string);
    printf("%s%s", A_string, E_string);

    /*
    scanf will read characters until space comes.
    */
    
    return 0;
}