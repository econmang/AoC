#include <stdio.h>
#include "elf_expedition.h"

int elf_w_most_cals(char fileName[]) {
    FILE* infile = fopen(fileName, "r");
    if (infile == NULL) {
        return -1;
    }

    char line[100];
    while (fgets(line, sizeof(line), infile) != NULL)
    {
        printf("%s", line);
    }
    return 1;
}
