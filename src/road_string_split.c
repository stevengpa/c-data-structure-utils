#include "road_string_split.h"

#include <string.h>
#include <stdlib.h>

split_result* split_result_init(unsigned int const capacity) {
    split_result *result = malloc(sizeof(split_result));
    if (!result) return NULL;

    result->capacity = capacity > 0 ? capacity : 2;
    result->count = 0;

    result->list = malloc(sizeof(char*) * result->capacity);
    if (!result->list) {
        free(result);
        return NULL;
    }

    return result;
}

void split_result_free(split_result **result_ptr) {
    if (!result_ptr || !*result_ptr) return;

    split_result *res = *result_ptr;

    // Free memory
    for (unsigned int i = 0; i < res->count; i++) {
        free(res->list[i]);
    }
    free(res->list);
    free(res);
    res = NULL;
}

split_result* split(char const *origin, char const *delimiter) {
    if (!origin || !delimiter) return NULL;

    split_result *result = split_result_init(2);

    char *copy = strdup(origin);
    char *splits = strtok(copy, delimiter);

    while (splits) {
        // Allocate if needed
        if (result->count >= result->capacity) {
            result->capacity *= 2;
            result->list = realloc(result->list, sizeof(char *) * result->capacity);
            if (!result->list) {
                return NULL;
            }
        }
        // Store the result
        result->list[result->count++] = strdup(splits);
        splits = strtok(NULL, delimiter);
    }

    free(copy);
    copy = NULL;

    return result;
}