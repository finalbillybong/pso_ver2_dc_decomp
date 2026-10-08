#ifndef PSO_BASE_CHILD_VIRTUAL_H
#define PSO_BASE_CHILD_VIRTUAL_H
/* Slots 0..4 provisional; update is observed at dispatch offset 28. */
#include "src/include/base_child.h"
struct BaseChildParentState {char unknown00[228];short mode;};
class BaseChildVirtual {public:unsigned int tag;unsigned short flags;char unknown06[18];virtual void unknown0();virtual void unknown1();virtual void unknown2();virtual void unknown3();virtual void unknown4();virtual void update();};
class BaseChildView:public BaseChildVirtual {public:char unknown1c[2];unsigned short size;Vector3 position;int angle_x,angle_y,angle_z;float remaining;Vector3 velocity,initial;BaseChildLink *linked;void *parent,*mesh,*matrix;};
typedef char check_BaseChildParentState_mode[(unsigned long)&((BaseChildParentState *)0)->mode == 228 ? 1 : -1];
typedef char check_BaseChildParentState_prefix[sizeof(BaseChildParentState) == 230 ? 1 : -1];
typedef char check_BaseChildVirtual_tag[(unsigned long)&((BaseChildVirtual *)0)->tag == 0 ? 1 : -1];
typedef char check_BaseChildVirtual_flags[(unsigned long)&((BaseChildVirtual *)0)->flags == 4 ? 1 : -1];
typedef char check_BaseChildVirtual_prefix[sizeof(BaseChildVirtual) == 28 ? 1 : -1];
typedef char check_BaseChildView_tag[(unsigned long)&((BaseChildView *)0)->tag == 0 ? 1 : -1];
typedef char check_BaseChildView_flags[(unsigned long)&((BaseChildView *)0)->flags == 4 ? 1 : -1];
typedef char check_BaseChildView_size[(unsigned long)&((BaseChildView *)0)->size == 30 ? 1 : -1];
typedef char check_BaseChildView_position[(unsigned long)&((BaseChildView *)0)->position == 32 ? 1 : -1];
typedef char check_BaseChildView_angle_x[(unsigned long)&((BaseChildView *)0)->angle_x == 44 ? 1 : -1];
typedef char check_BaseChildView_angle_y[(unsigned long)&((BaseChildView *)0)->angle_y == 48 ? 1 : -1];
typedef char check_BaseChildView_angle_z[(unsigned long)&((BaseChildView *)0)->angle_z == 52 ? 1 : -1];
typedef char check_BaseChildView_remaining[(unsigned long)&((BaseChildView *)0)->remaining == 56 ? 1 : -1];
typedef char check_BaseChildView_velocity[(unsigned long)&((BaseChildView *)0)->velocity == 60 ? 1 : -1];
typedef char check_BaseChildView_initial[(unsigned long)&((BaseChildView *)0)->initial == 72 ? 1 : -1];
typedef char check_BaseChildView_linked[(unsigned long)&((BaseChildView *)0)->linked == 84 ? 1 : -1];
typedef char check_BaseChildView_parent[(unsigned long)&((BaseChildView *)0)->parent == 88 ? 1 : -1];
typedef char check_BaseChildView_mesh[(unsigned long)&((BaseChildView *)0)->mesh == 92 ? 1 : -1];
typedef char check_BaseChildView_matrix[(unsigned long)&((BaseChildView *)0)->matrix == 96 ? 1 : -1];
typedef char check_BaseChildView_prefix[sizeof(BaseChildView) == 100 ? 1 : -1];
#endif
