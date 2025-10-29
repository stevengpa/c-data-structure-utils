#include "road_string.h"

#include <stdio.h>
#include <stdlib.h>

int main() {
    char *demo = "Name, LastName, Age";
    split_result *result = split(demo, ",");
    for (unsigned int i = 0; i < result->count; i++) {
        char *s = ltrim(result->list[i]);
        printf("%s\n", s);
        free(s);
        s = NULL;
    }
    split_result_free(&result);

    return 1;
}