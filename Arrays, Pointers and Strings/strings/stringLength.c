#include <stdio.h>

int main(void)
{
    char userString[80];
    int i = 0;
    
    printf("Enter the string without space. That you want to get the length.\n");
    scanf("%s", userString);

    while (userString[i] != '\0')
    {
        i++;
    }

    printf("Length of the string is %d\n", i);
    return 0;
}