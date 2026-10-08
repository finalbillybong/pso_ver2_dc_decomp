#include "src/include/vector_array.h"
#define count_at ((int (*)(void *))0x8c0420b0)
extern void *allocate_at(unsigned int);
void allocate_vector_entries(VectorArray *array,void *input) {
 int i;
 array->count=count_at(input);
 array->entries=allocate_at(array->count*28);
 for(i=0;i<array->count;i++) {
  array->entries[i].kind=0;
  *(float *)((char *)&array->entries->position.x+i*28)=0.0f;
  *(float *)((char *)&array->entries->position.y+i*28)=0.0f;
  *(float *)((char *)&array->entries->position.z+i*28)=0.0f;
 }
}
