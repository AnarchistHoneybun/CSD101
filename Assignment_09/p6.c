#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encrypt(int start, int end, int n, char padded_string[], char output_string[])
{
    for (int i = 0; i < 5; i++)
    {
    }
}

int main()
{
    char input_string[255];
    printf("Enter input string: ");
    fgets(input_string, 255, stdin);
    printf("input string= %s\n", input_string); // Hello, world!

    input_string[strlen(input_string) - 1] = '\0'; // removing last \n character

    int input_string_length = strlen(input_string);            // to ignore \n character
    printf("input string length = %d\n", input_string_length); // 13

    int n = 0, a = 0, b = 0;

    printf("Enter n: ");
    scanf("%d", &n); // 3

    printf("Enter a: ");
    scanf("%d", &a); // 3

    printf("Enter b: ");
    scanf("%d", &b); // 3

    int buffer = n - (input_string_length % n); // 5 - 13 % 5 = 2
    printf("buffer = %d\n", buffer);

    int final_string_length = input_string_length + buffer; // 13 + 2 = 15

    printf("final string length = %d\n", final_string_length); // 15

    char padded_string[final_string_length];

    strcpy(padded_string, input_string);

    printf("padded string after copying input string: %s\n", padded_string); // final string = Hello, world!

    printf("length of padded string array after copying input array = %zu\n", strlen(padded_string)); // 13

    for (int i = 0; i < buffer; i++)
    {
        padded_string[input_string_length + i] = '#'; // appending null characters to last block of the new string
    }

    int padded_string_length = sizeof(padded_string) / sizeof(padded_string[0]);

    printf("length of padded string array = %zu\n", padded_string_length); // using sizeof because strlen only calculates till null character

    printf("padded string: %s\n", padded_string); // padded string is applesauce with last 2 characters as null

    int number_of_blocks = padded_string_length / n; // 15 / 5 = 3

    char output_string[padded_string_length];

    int start = 0;

    for (int block = 0; block < number_of_blocks; block++)
    {
        for (int i = 0; i < n; i++)
        {
            int output_idx = ((a * i) + b) % n;
            output_string[i + start] = padded_string[output_idx + start];
        }

        start += n;
    }

    printf("output string = %s\n", output_string);
}
//padding with # for better formating
