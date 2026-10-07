#ifndef PSO_VECTOR_QUERY_H
#define PSO_VECTOR_QUERY_H
#include "src/include/vector3.h"
/* Provisional result/data prefixes from the two vector-query wrappers. */
typedef struct VectorQueryData { Vector3 position, normal; } VectorQueryData;
typedef struct VectorQueryResult {
    unsigned int unknown00;
    VectorQueryData *data;
} VectorQueryResult;
typedef char check_query_data[
    (unsigned long)&((VectorQueryResult *)0)->data == 4 ? 1 : -1];
typedef char check_query_position[
    (unsigned long)&((VectorQueryData *)0)->position == 0 ? 1 : -1];
typedef char check_query_normal[
    (unsigned long)&((VectorQueryData *)0)->normal == 12 ? 1 : -1];
#endif
