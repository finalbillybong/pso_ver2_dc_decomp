#include "src/include/vector_array.h"
#define allocate_entries_at ((void (*)(VectorArray *,void *))0x8c0c703c)
#define transform_at ((void (*)(void *,float))0x8c3ab8f8)
extern void begin_at(void *);
#define fill_at ((int (*)(VectorArray *,void *,int))0x8c0c71a0)
#define end_at ((void (*)(void))0x8c38ad10)
VectorArray *initialize_scaled_vector_array(VectorArray *array,void *input,void *transform,float scale) {
 array->dispatch=(void *)0x8c2668c0;
 allocate_entries_at(array,input);
 transform_at(transform,scale);
 begin_at((void *)0x8c400500);
 fill_at(array,input,0);
 end_at();
 return array;
}
