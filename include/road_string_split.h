#ifndef ROAD_STRING_SPLIT_H
#define ROAD_STRING_SPLIT_H

typedef struct {
    unsigned int count;
    unsigned int capacity;
    char **list;
} split_result;

split_result* split_result_init(unsigned int capacity);
void split_result_free(split_result **result_ptr);
split_result* split(char const *origin, char const *delimiter);

#endif //ROAD_STRING_SPLIT_H