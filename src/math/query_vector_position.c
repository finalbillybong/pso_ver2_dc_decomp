#include "src/include/vector_query.h"

extern VectorQueryResult *query_at(Vector3 *, int);

/* Recopy the original source on failure, preserving the observed alias behavior.
 */
int query_vector_position(Vector3 *source, Vector3 *destination) {
    VectorQueryResult *result;
    *destination = *source;
    destination->y += 20.0f;
    result = query_at(destination, 0x16ef);
    if (result) {
        *destination = result->data->position;
        return 1;
    }
    *destination = *source;
    return 0;
}
