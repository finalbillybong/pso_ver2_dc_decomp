#ifndef PSO_SHARED_OBJECT_H
#define PSO_SHARED_OBJECT_H
/* Provisional shared-object view; extent covers observed fields, not necessarily the complete object. */
#include "src/include/vector3.h"
typedef struct SharedObjectView {
 unsigned char unknown_00[24]; void *dispatch;
 unsigned char unknown_1c[4]; unsigned short id; unsigned char unknown_22[2];
 int field_24,field_28; short field_2c,field_2e,field_30; unsigned char unknown_32[2];
 int field_34; void *field_38; Vector3 position,field_48,field_54;
 int angles[3]; Vector3 scale,field_78; void *field_84;
} SharedObjectView;
typedef char check_shared_dispatch[((unsigned long)&((SharedObjectView *)0)->dispatch)==24?1:-1];
typedef char check_shared_id[((unsigned long)&((SharedObjectView *)0)->id)==32?1:-1];
typedef char check_shared_field_24[((unsigned long)&((SharedObjectView *)0)->field_24)==36?1:-1];
typedef char check_shared_field_28[((unsigned long)&((SharedObjectView *)0)->field_28)==40?1:-1];
typedef char check_shared_field_2c[((unsigned long)&((SharedObjectView *)0)->field_2c)==44?1:-1];
typedef char check_shared_field_2e[((unsigned long)&((SharedObjectView *)0)->field_2e)==46?1:-1];
typedef char check_shared_field_30[((unsigned long)&((SharedObjectView *)0)->field_30)==48?1:-1];
typedef char check_shared_field_34[((unsigned long)&((SharedObjectView *)0)->field_34)==52?1:-1];
typedef char check_shared_field_38[((unsigned long)&((SharedObjectView *)0)->field_38)==56?1:-1];
typedef char check_shared_position[((unsigned long)&((SharedObjectView *)0)->position)==60?1:-1];
typedef char check_shared_field_48[((unsigned long)&((SharedObjectView *)0)->field_48)==72?1:-1];
typedef char check_shared_field_54[((unsigned long)&((SharedObjectView *)0)->field_54)==84?1:-1];
typedef char check_shared_angles[((unsigned long)&((SharedObjectView *)0)->angles)==96?1:-1];
typedef char check_shared_scale[((unsigned long)&((SharedObjectView *)0)->scale)==108?1:-1];
typedef char check_shared_field_78[((unsigned long)&((SharedObjectView *)0)->field_78)==120?1:-1];
typedef char check_shared_field_84[((unsigned long)&((SharedObjectView *)0)->field_84)==132?1:-1];
typedef char check_shared_view_size[sizeof(SharedObjectView)==136?1:-1];
#endif
