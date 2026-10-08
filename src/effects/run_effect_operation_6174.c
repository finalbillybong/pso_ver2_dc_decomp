#include "src/include/effect_operation_view.h"
extern void *operation_at(EffectOperationView *,void *,Vector3 *,void *);
void *run_effect_operation_6174(EffectOperationView *effect,void *argument){return operation_at(effect,effect->first_resource,&effect->first_position,argument);}
