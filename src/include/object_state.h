#ifndef PSO_OBJECT_STATE_H
#define PSO_OBJECT_STATE_H
#include "src/include/vector_query.h"
/* Provisional views of observed fields, not full allocation extents.
 * The query argument starts at 0x94; its internal layout remains unknown. */
typedef struct ObjectHeightView {
    char unknown_00[16];
    float height;
} ObjectHeightView;
typedef struct ObjectStateView {
    char unknown_00[24];
    void *dispatch;
    char unknown_1c[32];
    Vector3 position;
    char unknown_48[76];
    char query_data_start;
    char unknown_95[239];
    ObjectHeightView *height_source;
    char unknown_188[412];
    Vector3 center;
} ObjectStateView;

typedef char check_ObjectHeightView_height[
    (unsigned long)&((ObjectHeightView *)0)->height == 16 ? 1 : -1];
typedef char check_ObjectStateView_dispatch[
    (unsigned long)&((ObjectStateView *)0)->dispatch == 24 ? 1 : -1];
typedef char check_ObjectStateView_position[
    (unsigned long)&((ObjectStateView *)0)->position == 60 ? 1 : -1];
typedef char check_ObjectStateView_query_data_start[
    (unsigned long)&((ObjectStateView *)0)->query_data_start == 148 ? 1 : -1];
typedef char check_ObjectStateView_height_source[
    (unsigned long)&((ObjectStateView *)0)->height_source == 388 ? 1 : -1];
typedef char check_ObjectStateView_center[
    (unsigned long)&((ObjectStateView *)0)->center == 804 ? 1 : -1];
typedef char check_height_view_prefix[sizeof(ObjectHeightView) == 20 ? 1 : -1];
typedef char check_object_state_prefix[sizeof(ObjectStateView) == 816 ? 1 : -1];
#endif
