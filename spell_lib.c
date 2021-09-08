#include "spell_lib.h"

char** parseDict(char* pathname)
{
    int entries = 0;
    char* line;

    // Go through the input file and determine how many lines are in the file - 1 line is 1 word

    FILE *dict = fopen(pathname, "r");

    while (fgets(line, 100, dict) != NULL)
        entries++;

    // Create new array for size of input file

    char* dentries[entries, 20];
    char* ret = malloc(sizeof(dentries));

    // Read input file into array

    rewind(dict);

    for (int i = 0; i < entries; i++)
    {
        fgets(line, 100, dict);

        line = strtok(line, ' ');

        strncpy(ret[i], line, strlen(line));
    }

    // Return array

    return ret;
}

int wordSearch(char* word char** dict)
{

}

int bad_word(char* word, int line, FILE* out)
{

}