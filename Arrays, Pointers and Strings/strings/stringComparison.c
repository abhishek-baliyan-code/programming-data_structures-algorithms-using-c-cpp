#include <stdio.h>

int main(void)
{
    // Reading two string from user
    char string_A[80], string_B[80];    
    printf("Enter the two strings without space. That you want to compare.\n");
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

    // Comparing the strings
    i = 0;
    while (string_A[i] == string_B[i] && i < strALen && i < strBLen)
    {
        i++;
    }
    if (i == strALen && i == strBLen) printf("A = B");  //  A = "Hello"     B = "Hello"
    else if (string_A[i] == '\0') printf("A < B");  //  A = "Hell"      B = "Hello"
    else if (string_B[i] == '\0') printf("A > B");  //  A = "Hello"     B = "Hell"
    else if (string_A[i] < string_B[i]) printf("A < B");  // A = "Bell"     B = "Bull"
    else printf("A > B");   // A = "Hull"     B = "Hello"


    return 0;
}