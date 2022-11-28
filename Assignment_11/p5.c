#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char[], char[]);

int main()
{
    char** name;
    int i, n, j, y;
    printf("Enter the number of strings:");
    scanf("%d", &n);
    name = malloc(n * sizeof *name);
    for (i = 0; i < n; i++)
    {
        name[i] = (char*)malloc(100 * sizeof(char));
    }
    printf("Enter the names:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%99s", name[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            y = strcmp(name[i], name[j]);
            if (y >= 0)
            {
                swap(name[i], name[j]);
            }
        }
    }
    printf("\nArranged strings:\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\n", name[i]);
    }
    free(name);
    return 0;
}

void swap(char a[], char b[])
{
    char temp[100];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}
