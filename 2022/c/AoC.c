#include <stdio.h>
#include "day_one/elf_expedition.h"

int main() {
    char file_path[] = "../inputs/day_one.txt";
    int elf = elf_w_most_cals(file_path);
    printf("%d\n", elf);

    return 0;
}
