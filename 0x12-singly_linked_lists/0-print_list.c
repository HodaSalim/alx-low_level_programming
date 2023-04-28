#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h){
    int count = 0;
    while (h) {
        if (h->str == NULL)
            printf("[%d] (nil)\n", h->len );
        else
            printf("[%d] %s\n", h->len, h->str);

        count ++;
        h = h->next;
    }
    return count;
}
