// simple c program to find and replace all occurences of a word in a text file using a function //

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#define null 0
#define max_string 100 // max_string = maximum string length // // edit this according to your needs //

// assignment_11/sourcep1.txt - original file that we will use in this program //
// this will get modified after running this program //

// we have to assume that source string and replacement string are of the same length so in this program I will be replacing mine with your//

// function definitions //

void find_and_replace(char *source_file , char *word_to_find , char *word_to_replace); // function to find and replace all occurences of a word in a file where source file, word to find and word to replace are taken as input from the user//

// driver code//
signed main(void)
{
    char source_file[max_string], word_to_find[max_string], word_to_replace[max_string];
    printf("\n Please enter the source file name(including extension): "); // source file name //
    scanf("%s", source_file); // source file name //
    printf("\n\n\t NOTE: The word to find and the word to replace should be of the same length or the program would misbehave. This is in accordance with the assignment requirements.\n ");
    printf("\n Please enter the word to find: "); // word to find //
    scanf("%s", word_to_find); // word to find //
    printf("\n Please enter the word to replace: "); // word to replace //
    scanf("%s", word_to_replace); // word to replace //
    find_and_replace(source_file, word_to_find, word_to_replace); // function call //
    return null;
}

void find_and_replace(char *source_file , char *word_to_find , char *word_to_replace)
{
    // to open both files //
    FILE *fp1, *fp2;
    char ch;
    int i, j, flag;
    fp1 = fopen(source_file, "r"); // source file //
    fp2 = fopen("temp.txt", "w"); // temporary file //

    // to read the file contents into a string //
    char *string = (char *)malloc(max_string * sizeof(char)); // string to store the contents of the source file //
    i = null;
    while ((ch = fgetc(fp1)) != EOF)
    {
        string[i] = ch; // storing the contents of the source file into a string //
        i++;
    }
    string[i] = '\0'; // null character at the end of the string //
    fclose(fp1);

    // to find and replace the word //
    i = null;
    while (string[i] != '\0')
    {
        j = null;
        flag = null;
        while (string[i] == word_to_find[j])
        {
            i++;
            j++;
            if (word_to_find[j] == '\0')
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            fprintf(fp2, "%s", word_to_replace); // writing the word to replace in the temporary file //
        }
        else
        {
            fprintf(fp2, "%c", string[i]); // writing the word to find in the temporary file //
            i++;
        }
    }
    fclose(fp2);

    // to copy the contents of temp.txt to source_file //
    fp1 = fopen(source_file, "w"); // source file //
    fp2 = fopen("temp.txt", "r"); // temporary file //
    while ((ch = fgetc(fp2)) != EOF)
    {
        fputc(ch, fp1); // copying the contents of the temporary file to the source file //
    }
    rename(source_file, "output_sourcep1.txt"); // renaming the source file //
    fclose(fp1); // closing the source file //
    fclose(fp2); // closing the temporary file //
    // to delete the temp.txt file //
    remove("temp.txt"); // deleting the temporary file //
    // to remove the string from the memory //
    free(string);
}
