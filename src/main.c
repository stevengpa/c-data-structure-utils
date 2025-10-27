#include "road_string.h"

#include <stdio.h>
#include <stdlib.h>

/*
 * clang -fsanitize=address -g -Iinclude src/main.c src/road_string.c src/road_string_split.c -o bin/demo
 */

int main() {
    char *demo = "Name, LastName, Age";
    split_result *result = split(demo, ",");
    for (unsigned int i = 0; i < result->count; i++) {
        char *s = ltrim(result->list[i]);
        // printf("%s\n", ltrim(result->list[i])); // Memory Leak
        printf("%s\n", s);
        free(s);
    }
    split_result_free(&result);

    return 1;
}