#ifndef ROAD_STRING_H
#define ROAD_STRING_H

#include "road_string_split.h"
/*
*SEE ALSO
     bstring(3), index(3), rindex(3), stpcpy(3), strcasecmp(3), strcat(3), strchr(3), strcmp(3), strcpy(3), strcspn(3), strerror(3), strlen(3), strpbrk(3), strrchr(3),
     strsep(3), strspn(3), strstr(3), strtok(3)

STANDARDS
     The strcat(), strncat(), strchr(), strrchr(), strcmp(), strncmp(), strcpy(), strncpy(), strerror(), strlen(), strpbrk(), strspn(), strcspn(), strstr(), and strtok()
     functions conform to ISO/IEC 9899:1990 (“ISO C90”).
 */

char *ltrim(char const *origin);
char *rtrim(char const *origin);
char *trim(char const *origin);

#endif //ROAD_STRING_H