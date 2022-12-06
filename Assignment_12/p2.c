// simple c program to remove all words listed in the stop-words file from the source file //

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#define null 0
#define max_string 100 // max_string = maximum string length // // edit this according to your needs //

void remove_stop_words(char *source_file , char *stop_words_file); // function to remove all words listed in the stop-words file from the source file //

// driver code//
signed main(void)
{
    char source_file[max_string];
    char stop_words_file[max_string];
    printf("\n Please enter the source file name(including extension): ");
    scanf("%s", source_file);
    printf("\n Please enter the stop words file name(including extension): ");
    scanf("%s", stop_words_file);
    remove_stop_words(source_file, stop_words_file);
    return null;
}


void remove_stop_words(char *source_file , char *stop_words_file)
{
    // to open both files //
    FILE *fp1, *fp2;
    char ch;
    int i, j, flag;
    fp1 = fopen(source_file, "r");
    fp2 = fopen("temp.txt", "w");

    // to read the file contents into the memory //
    char *string = (char *)malloc(max_string * sizeof(char));
    i = null;
    while ((ch = fgetc(fp1)) != EOF)
    {
        string[i] = ch;
        i++;
    }
    string[i] = '\0';
    fclose(fp1);

    // while working in memory, to remove from the 'source' content all the words listed in the 'stop words' content //
    char *stop_words = (char *)malloc(max_string * sizeof(char));
    fp2 = fopen(stop_words_file, "r");

    // to read the file contents of stop word file into a string //
    i = null;
    while (string[i] != '\0')
    {
        flag = null;
        j = null;
        while (stop_words[j] != '\0')
        {
            if (string[i] == stop_words[j])
            {
                flag = 1;
                break;
            }
            j++;
        }
        if (flag == null)
        {
            fputc(string[i], fp2);
        }
        i++;
    }
    fclose(fp2);

    // to write back the modified content to the source file //
    fp1 = fopen(source_file, "w");
    fp2 = fopen("output.txt", "r");
    while ((ch = fgetc(fp2)) != EOF)
    {
        fputc(ch, fp1);
    }

    // to close both files //
    fclose(fp1);
    fclose(fp2);
}

