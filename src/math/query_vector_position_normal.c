#include "src/include/vector_query.h"

extern VectorQueryResult *query_at(Vector3 *, int);

/* Recopy the original source on failure, preserving the observed alias behavior.
 * The optional normal output is untouched on failure. */
int query_vector_position_normal(Vector3 *source, Vector3 *destination, Vector3 *normal) {
    VectorQueryResult *result;
    *destination = *source;
    destination->y += 20.0f;
    result = query_at(destination, 0x16ef);
    if (result) {
        *destination = result->data->position;
        *normal = result->data->normal;
        return 1;
    }
    *destination = *source;
    return 0;
}
