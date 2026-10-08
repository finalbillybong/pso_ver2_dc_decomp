#ifndef PSO_FILLED_VECTOR_ENTRY_H
#define PSO_FILLED_VECTOR_ENTRY_H
#include "src/include/vector3.h"
/* Provisional filled view of the independently verified 28-byte entry. */
typedef struct FilledVectorEntry {void *resource;Vector3 position,secondary_position;} FilledVectorEntry;
typedef char check_FilledVectorEntry_resource[(unsigned long)&((FilledVectorEntry *)0)->resource == 0 ? 1 : -1];
typedef char check_FilledVectorEntry_position[(unsigned long)&((FilledVectorEntry *)0)->position == 4 ? 1 : -1];
typedef char check_FilledVectorEntry_secondary_position[(unsigned long)&((FilledVectorEntry *)0)->secondary_position == 16 ? 1 : -1];
typedef char check_FilledVectorEntry_size[sizeof(FilledVectorEntry)==28?1:-1];
#endif
