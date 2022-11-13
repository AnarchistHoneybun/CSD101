#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define NULL 0
#define unity 1
#define len_max 100

void scoring_func(char *string);
signed string_uppercase(char *string);
signed if_space(char *string);


int main()
{
    signed return_value = NULL;
    char string[len_max];
    printf("\n Please enter the string : ");
    fgets(string, len_max, stdin);

    return_value = if_space(string);
    if (return_value == unity)
        {
            printf("\n Illegal input");
            return NULL;
        }
    string_uppercase(string);
    scoring_func(string);
    return 0;
}




void scoring_func(char *string)
{
    signed length = strlen(string);
    signed score = NULL;
    for (signed index = NULL; index < length; index++)
        {
            switch (string[index])
                {
                    case 'A':
                    case 'E':
                    case 'I':
                    case 'L':
                    case 'N':
                    case 'O':
                    case 'R':
                    case 'S':
                    case 'T':
                    case 'U':
                        score += unity;
                        break;
                    case 'D':
                    case 'G':
                        score += 2;
                        break;
                    case 'B':
                    case 'C':
                    case 'M':
                    case 'P':
                        score += 3;
                        break;
                    case 'F':
                    case 'H':
                    case 'V':
                    case 'W':
                    case 'Y':
                        score += 4;
                        break;
                    case 'K':
                        score += 5;
                        break;
                    case 'J':
                    case 'X':
                        score += 8;
                        break;
                    case 'Q':
                    case 'Z':
                        score += 10;
                        break;
                }
        }
    printf("\n Your scrabble score is : %d", score);
}

signed string_uppercase(char *string)
{
    signed length = strlen(string);
    for (signed index = NULL; index < length; index++)
        {
            if (string[index] >= 'a' && string[index] <= 'z')
                {
                    string[index] -= 32;
                }
        }
}


signed if_space(char *string)
{
    signed length = strlen(string);
    for (signed index = NULL; index < length; index++)
        {
            if(string[index]==' ')
                {
                    return unity;
                }


        }
}
