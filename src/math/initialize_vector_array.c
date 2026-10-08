#include "src/include/vector_array.h"
#define allocate_entries_at ((void (*)(VectorArray *,void *))0x8c0c703c)
extern void begin_at(void *);
#define fill_at ((int (*)(VectorArray *,void *,int))0x8c0c70dc)
#define end_at ((void (*)(void))0x8c38ad10)
VectorArray *initialize_vector_array(VectorArray *array,void *input) {
 array->dispatch=(void *)0x8c2668c0;
 allocate_entries_at(array,input);
 begin_at((void *)0x8c400500);
 fill_at(array,input,0);
 end_at();
 return array;
}
