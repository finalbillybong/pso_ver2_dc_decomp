#ifndef PSO_HIERARCHY_ARRAY_H
#define PSO_HIERARCHY_ARRAY_H
/* Provisional view of adjacent hierarchy array routines.
 * Checked field offsets do not claim the full runtime object extent. */
typedef struct HierarchyArrayView {
 unsigned char unknown_00[24]; void *dispatch;
 unsigned char unknown_1c[4]; int capacity, count;
 void **items; int first; int *values; int total;
} HierarchyArrayView;
typedef char check_array_dispatch[((unsigned long)&((HierarchyArrayView *)0)->dispatch)==24?1:-1];
typedef char check_array_capacity[((unsigned long)&((HierarchyArrayView *)0)->capacity)==32?1:-1];
typedef char check_array_count[((unsigned long)&((HierarchyArrayView *)0)->count)==36?1:-1];
typedef char check_array_items[((unsigned long)&((HierarchyArrayView *)0)->items)==40?1:-1];
typedef char check_array_first[((unsigned long)&((HierarchyArrayView *)0)->first)==44?1:-1];
typedef char check_array_values[((unsigned long)&((HierarchyArrayView *)0)->values)==48?1:-1];
typedef char check_array_total[((unsigned long)&((HierarchyArrayView *)0)->total)==52?1:-1];
#endif
