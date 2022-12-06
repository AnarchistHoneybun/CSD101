
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include <ctype.h>
#define null 0
#define max_string 100
#define max_words 1000

void word_frequency(char *filename);


signed main(void)
{
    char filename[max_string];
    printf("\n Please enter the filename: ");
    scanf("%s", filename);
    word_frequency(filename);
    return null;
}



void word_frequency(char *filename)
{


    FILE *fp1;
    char ch, word[max_string], words[max_words][max_string];
    int i, j, flag, count[max_words];
    fp1 = fopen(filename, "r");
    if (fp1 == null)
    {
        printf("\n Error opening file. Please check the filename and try again. ");
        exit(1);
    }

    char *string = (char *)malloc(max_string * sizeof(char));
    i = null;
    while ((ch = fgetc(fp1)) != EOF)
    {
        string[i] = ch;
        i++;
    }
    string[i] = '\0';
    fclose(fp1);

    printf("\n The file contents are: ");
    printf("\n %s", string);


    i = null;
    j = null;
    flag = null;

    while (string[i] != '\0')
    {
        if (string[i] == ' ' || string[i] == ',' || string[i] == '.' || string[i] == '!' || string[i] == '?' || string[i] == ';')
        {
            word[j] = '\0';
            flag = null;
            for (int k = null; k < i; k++)
            {
                if (strcmp(word, words[k]) == null)
                {
                    flag = 1;
                    count[k]++;
                    break;
                }
            }
            if (flag == null)
            {
                strcpy(words[j], word);
                count[j] = 1;
                j++;
            }
            j = null;
        }
        else
        {
            word[j] = string[i];
            j++;
        }
        i++;
    }



    printf("\n The word frequency statistics are: ");
    printf("\n Word \t\t Frequency ");
    for (int k = null; k < j; k++)
    {
        printf("\n %s \t\t %d", words[k], count[k]);
    }
    printf("\n\n");
}
