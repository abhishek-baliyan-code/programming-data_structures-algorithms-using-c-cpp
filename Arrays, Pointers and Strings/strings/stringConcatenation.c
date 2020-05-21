#include <stdio.h>

int main(void)
{
    // Reading two string from user
    char string_A[80], string_B[80];    
    printf("Enter the two strings without space. That you want to concatenate.\n");
    scanf("%s\n%s", string_A, string_B);

    // Getting the length of string A
    int strALen, i = 0;
    while (string_A[i] != '\0') i++;
    strALen = i;
    i = 0;

    // Getting the length of string B
    int strBLen;
    while (string_B[i] != '\0') i++;
    strBLen = i;

    // Declaraing an string of the sum of the length of string_A and string_B
    int totalLen = strALen + strBLen + 1;
    char string_concat[totalLen];

    // int sub = strALen;
    // int count = 0;
    // Concatenation of string_A and string_B in string_concat
    for (i = 0; i < totalLen; i++)
    {
        /* string_B[i - (strALen + 1)] - Because In this point i value is length of strting_A + 1. 
           But i need i == 0; And i can't change i because of loop and i will run the previous condition again.
           So i subtracted the string_A length + 1. Now i for string_B is 0. But for others is without any change.
        
        */
        string_concat[i] = (string_A[i] != '\0') ? string_A[i] : (string_B[i - strALen] != '\0') ? string_B[i - strALen] : '\0';

        // if (string_A[i] != '\0')
        // {
        //     string_concat[i] = string_A[i];
        // } else if (string_B[i - strALen] != '\0')
        // {
        //     string_concat[i] = string_B[i - strALen];
        // } else
        // {
        //     string_concat[i] = '\0';
        // }
        
    }
    
    // Getting the length of string_concat
    int strConLen;
    while (string_concat[i] != '\0') i++;
    strConLen = i;

    // Show the result
    printf("User input 1  : '%s'\t\t length: %d\n", string_A, strALen);
    printf("User input 2  : '%s'\t\t length: %d\n", string_B, strBLen);
    printf("Concatenation : '%s'\t\t length: %d\n", string_concat, strConLen);

    return 0;
}