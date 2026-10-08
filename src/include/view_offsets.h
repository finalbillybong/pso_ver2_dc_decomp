#ifndef PSO_VIEW_OFFSETS_H
#define PSO_VIEW_OFFSETS_H
#include "src/include/vector3.h"
/* Provisional accessed prefixes; names do not assert original class identity. */
typedef struct ViewOffsetOwner {char unknown0[112];Vector3 first;Vector3 second;unsigned int unknown136;void *data;} ViewOffsetOwner;
typedef struct ViewOffsetSource {unsigned int unknown0;void *data;} ViewOffsetSource;
typedef char check_ViewOffsetOwner_first[(unsigned long)&((ViewOffsetOwner *)0)->first==112?1:-1];
typedef char check_ViewOffsetOwner_second[(unsigned long)&((ViewOffsetOwner *)0)->second==124?1:-1];
typedef char check_ViewOffsetOwner_data[(unsigned long)&((ViewOffsetOwner *)0)->data==140?1:-1];
typedef char check_ViewOffsetOwner_size[sizeof(ViewOffsetOwner)==144?1:-1];
typedef char check_ViewOffsetSource_data[(unsigned long)&((ViewOffsetSource *)0)->data==4?1:-1];
typedef char check_ViewOffsetSource_size[sizeof(ViewOffsetSource)==8?1:-1];
#endif
