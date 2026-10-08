#ifndef PSO_VECTOR_ARRAY_H
#define PSO_VECTOR_ARRAY_H
#include "src/include/vector3.h"
/* Provisional vector lookup/array layouts; untouched entry tail retained. */
typedef struct VectorLookup {int unknown00;Vector3 *position;} VectorLookup;
typedef struct VectorEntry {int kind;Vector3 position;char unknown10[12];} VectorEntry;
typedef struct VectorArray {int count;VectorEntry *entries;void *dispatch;} VectorArray;
typedef char check_VectorLookup_position[(unsigned long)&((VectorLookup *)0)->position == 4 ? 1 : -1];
typedef char check_VectorLookup_size[sizeof(VectorLookup)==8?1:-1];
typedef char check_VectorEntry_kind[(unsigned long)&((VectorEntry *)0)->kind == 0 ? 1 : -1];
typedef char check_VectorEntry_position[(unsigned long)&((VectorEntry *)0)->position == 4 ? 1 : -1];
typedef char check_VectorEntry_unknown10[(unsigned long)&((VectorEntry *)0)->unknown10 == 16 ? 1 : -1];
typedef char check_VectorEntry_size[sizeof(VectorEntry)==28?1:-1];
typedef char check_VectorArray_count[(unsigned long)&((VectorArray *)0)->count == 0 ? 1 : -1];
typedef char check_VectorArray_entries[(unsigned long)&((VectorArray *)0)->entries == 4 ? 1 : -1];
typedef char check_VectorArray_dispatch[(unsigned long)&((VectorArray *)0)->dispatch == 8 ? 1 : -1];
typedef char check_VectorArray_size[sizeof(VectorArray)==12?1:-1];
#endif
