#include "src/include/effect_operation_view.h"
extern void *operation_at(EffectOperationView *,void *,Vector3 *,void *);
void *run_effect_operation_5dbc(EffectOperationView *effect,void *argument){return operation_at(effect,effect->second_resource,&effect->second_position,argument);}
