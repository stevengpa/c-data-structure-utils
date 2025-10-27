#include "road_string.h"

#include <ctype.h>
#include <stdlib.h>
#include <string.h>


char *ltrim(char const *origin) {
    if (origin == NULL) return NULL;

    while (*origin && isspace((unsigned char) *origin)) {
        ++origin;
    }

    return strdup(origin);
}