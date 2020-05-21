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
    scanf will read string until space comes and put them in A_string. 
    Then again read string after the space and read it until next space come. 
    Then put in E_string. Then stop.
    */
    
    return 0;
}