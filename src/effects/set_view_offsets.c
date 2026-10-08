#include "src/include/view_offsets.h"
extern void *view_effect_slots[3];
void set_view_offsets(Vector3 *first,Vector3 *second,ViewOffsetSource *source){ViewOffsetOwner *effect=view_effect_slots[2];if(effect){effect->first=*first;effect->second=*second;effect->data=source->data;}}
