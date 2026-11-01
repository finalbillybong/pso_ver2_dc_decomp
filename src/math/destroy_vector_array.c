#include "src/include/vector_array.h"
#define operator_delete_8c18de08 ((void (*)(void *))0x8c18de08)
#define release_self_at ((void (*)(void *))0x8c011ed8)
VectorArray *destroy_vector_array(VectorArray *array,short flags) {
 if(array) {
  array->dispatch=(void *)0x8c2668c0;
  operator_delete_8c18de08(array->entries);
  array->entries=0;
  if(flags>0)release_self_at(array);
 }
 return array;
}
