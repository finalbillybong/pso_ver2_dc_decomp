#include "src/include/filled_vector_entry.h"
#include "src/include/vector_array.h"
#include "src/include/transform_node.h"
#define push_at ((void (*)(void))0x8c38ae68)
#define translate_at ((void (*)(Vector3 *))0x8c382a40)
#define rotate_at ((void (*)(int *,int))0x8c37dc90)
#define scale_at ((void (*)(Vector3 *))0x8c37e390)
#define transform_at ((void (*)(void *,TransformNode *,int))0x8c3aba08)
#define position_at ((void (*)(void *,Vector3 *,Vector3 *))0x8c3be280)
#define adjust_at ((void (*)(Vector3 *))0x8c041d80)
#define pop_at ((void (*)(void))0x8c38ad10)
int fill_scaled_vector_array(VectorArray *array,TransformNode *node,int index) {
 do {
  unsigned int flags;
  push_at();
  transform_at(0,node,0);
  flags=node->flags;
  if(!(flags&8)) {
   FilledVectorEntry *entry=(FilledVectorEntry *)((char *)array->entries+index*28);
   position_at(0,&entry->position,&entry->position);
   entry->secondary_position=entry->position;
   adjust_at(&entry->secondary_position);
   entry->resource=node->resource;
   index++;
  }
  if(!(flags&16))index=fill_scaled_vector_array(array,node->child,index);
  pop_at();
  node=node->next;
 }while(node);
 return index;
}
