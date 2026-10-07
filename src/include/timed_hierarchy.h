#ifndef PSO_TIMED_HIERARCHY_H
#define PSO_TIMED_HIERARCHY_H
#include "src/include/hierarchy.h"
/* Provisional view of the two observed 16-bit timing results. */
typedef struct TimedHierarchy { HierarchyNode base; unsigned short field_1c,field_1e; } TimedHierarchy;
typedef char check_timed_base[((unsigned long)&((TimedHierarchy *)0)->base)==0?1:-1];
typedef char check_timed_1c[((unsigned long)&((TimedHierarchy *)0)->field_1c)==28?1:-1];
typedef char check_timed_1e[((unsigned long)&((TimedHierarchy *)0)->field_1e)==30?1:-1];
#endif
