#ifndef PSO_EFFECT_OPERATION_VIEW_H
#define PSO_EFFECT_OPERATION_VIEW_H
#include "src/include/vector3.h"
/* Provisional accessed effect prefix and unresolved operation argument types. */
typedef struct EffectOperationView {char unknown00[204];Vector3 first_position,second_position;char unknowne4[20];void *first_resource;char unknownfc[8];void *second_resource;} EffectOperationView;
typedef char check_EffectOperationView_first_position[(unsigned long)&((EffectOperationView *)0)->first_position==204?1:-1];
typedef char check_EffectOperationView_second_position[(unsigned long)&((EffectOperationView *)0)->second_position==216?1:-1];
typedef char check_EffectOperationView_first_resource[(unsigned long)&((EffectOperationView *)0)->first_resource==248?1:-1];
typedef char check_EffectOperationView_second_resource[(unsigned long)&((EffectOperationView *)0)->second_resource==260?1:-1];
typedef char check_EffectOperationView_size[sizeof(EffectOperationView)==264?1:-1];
#endif
