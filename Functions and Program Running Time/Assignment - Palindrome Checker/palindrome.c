#include <stdio.h>
int strLength (char[]);
void palindromeChecker (char[], int, char*);

int main (void) 
{
    char palindrome[80];
    char prefix[80];
    int strLen;

    scanf ("%s", palindrome);
    strLen = strLength (palindrome);

    palindromeChecker (palindrome, strLen, prefix);

    return 0;
}

int strLength (char str[])
{
    int i = 0;
    while (str[i] != '\0') i++;
    return i;
}

void palindromeChecker (char str[], int length, char *prefix)
{   
    char *preValue;
    preValue = prefix;
    int i;
    int halfLen = length / 2;

    for (i = 0; i < halfLen; i++)
    {
        if (str[i] == str[(length - 1) - i]) preValue[i] = str[i];
        else break;        
    }

    if (length == 1 || length == 2 ||(halfLen == i))
    {
        printf("The string is palindrome. :- %s\n", str);
    } else if (i == 0)
    {
        printf("The string is not palindrome.\n");
    } else
    {
        preValue[i] = '\0';
        printf("User Input: %s\n", str);
        printf("Longest Prefix: %s\n", preValue);
    }
}

// Revision 
    // printf("left address: %p\n", left);
    // printf("leftPtr pointing to: %p\n", leftPtr);

    // printf("left content: %s\n", left);
    // printf("leftPtr pointing content: %s\n", leftPtr);

    // printf("left specific content: %c\n", left[1]);
    // printf("leftPtr pointing specific content: %c\n", leftPtr[1]);

    // printf("left specific content changed: %c\n", left[1] = 'a');
    // printf("left content: %s\n", left);
    // printf("leftPtr pointing specific content: %c\n", leftPtr[1] = 'm');
    // printf("leftPtr pointing content: %s\n", leftPtr);
