#include "cell.h"
#include <stdlib.h>
#include <malloc.h>


t_d_cell *create_cell(int value, int levels) {

    t_d_cell *new_cell = (t_d_cell *)malloc(sizeof(t_d_cell));

    //sécurité du maloc
    if (new_cell == NULL) {
        printf("out of memory");
        return NULL;
    }
    new_cell->levels = levels;
    // array de next
    new_cell->next = (t_d_cell **)malloc(levels * sizeof(t_d_cell *));

    if (new_cell->next == NULL) {
        free(new_cell);
        printf(""out of memory");
        return NULL;
    }

    // Initialisation
    new_cell->value = value;
    for (int i = 0; i < levels; i++) {
        new_cell->next[i] = NULL;
    }

    return new_cell;
}

