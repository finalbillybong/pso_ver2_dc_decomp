#include "src/include/vector_array.h"
#define allocate_entries_at ((void (*)(VectorArray *,void *))0x8c0c703c)
extern void njPushMatrix_8c38ade4(void *);
#define fill_at ((int (*)(VectorArray *,void *,int))0x8c0c70dc)
#define njPopMatrixEx_8c38ad10 ((void (*)(void))0x8c38ad10)
VectorArray *initialize_vector_array(VectorArray *array,void *input) {
 array->dispatch=(void *)0x8c2668c0;
 allocate_entries_at(array,input);
 njPushMatrix_8c38ade4((void *)0x8c400500);
 fill_at(array,input,0);
 njPopMatrixEx_8c38ad10();
 return array;
}
