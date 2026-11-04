#include "src/include/classes/TOVS2Wall01.h"
typedef char check_dispatch[(unsigned long)&((TOVS2Wall01 *)0)->dispatch==24?1:-1];
typedef char check_embedded[(unsigned long)&((TOVS2Wall01 *)0)->embedded==860?1:-1];
extern void finish_at(TOVS2Wall01 *),detach_at(TOVS2Wall01 *),embedded_at(void *,int),base_at(TOVS2Wall01 *,int),free_at(void *,void *);extern void *heap;
TOVS2Wall01 *TOVS2Wall01_dtor_8c24c6e4(TOVS2Wall01 *o,int release) {if(o) {o->dispatch=(void *)0x8c27d878;finish_at(o);detach_at(o);embedded_at(o->embedded,-1);base_at(o,0);if((short)release>0) free_at(heap,o);}return o;}
