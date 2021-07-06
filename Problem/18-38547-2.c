#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * code;
    char path[100];

    char ch;
    int characters, words, lines,ct=0;


    printf("Enter source file path: ");
    scanf("%s", path);

    code = fopen(path, "r");

    if (code == NULL)
    {
        printf("\nUnable to open file.\n");
        printf("Please check if file exists and you have read privilege.\n");

        exit(EXIT_FAILURE);
    }

    characters = words = lines = 0;
    while ((ch = fgetc(code)) != EOF)
    {
        characters++;

        if (ch == '\n' || ch == '\0')
            lines++;

        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
            words++;
        if(ch=='t'){
            ct++;
        }
    }

    if (characters > 0)
    {
        words++;
        lines++;
    }

    printf("\n");
    printf("Number of total words     = %d\n", words);
    printf("Number of words start with t    = %d\n", ct);
    printf("Total lines      = %d\n", lines);

    fclose(code);

    return 0;
}