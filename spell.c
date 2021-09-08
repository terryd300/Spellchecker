#include "spell.h"
#include "spell_lib.h"

int main() {
    char* dictname;
    char* inputfilename;
    char* line;
    char** dict;
    int dictfilefound = 0;
    int inputfilefound = 0;
    int dictionaryentries = 0;
    FILE* dictionary;
    FILE* inputfile;

    while (dictfilefound == 0)
    {
        printf("Please enter the dictionary file name: ");
        scanf("%s", dictname);

        dictionary = fopen(dictname, "r");

        if (dictionary == NULL)
        {
            dictfilefound = 0;
            printf("\nERROR! The dictionary file was not found.\n");
        }
        else
            dictfilefound = 1;
    }

    while (inputfilefound == 0)
    {
        printf("Please enter the input file name: ");
        scanf("%s", inputfilename);

        inputfile = fopen(inputfilename, "r");

        if (inputfile == NULL)
        {
            inputfilefound = 0;
            printf("\nERROR! The input file was not found.\n");
        }
        else
            inputfilefound = 1;
    }

    dict = parseDict(dictionary);

    while (fgets(line, 1000, inputfile) != NULL)
    {
        char* words = strtok(line, ' ');

        int counter = 0;

        while (words[counter] != NULL)
        {
            wordSearch(words[counter], dict);
        }

        counter++;
    }


    return 0;
}