#include "src/include/classes/TObjContainerIdo.h"
typedef char check_dispatch[(unsigned long)&((TObjContainerIdo *)0)->dispatch==24?1:-1];
typedef char check_embedded[(unsigned long)&((TObjContainerIdo *)0)->embedded==296?1:-1];
extern void finish_at(TObjContainerIdo *),detach_at(TObjContainerIdo *),embedded_at(void *,int),base_at(TObjContainerIdo *,int),free_at(void *,void *);extern void *heap;
TObjContainerIdo *TObjContainerIdo_dtor_8c083370(TObjContainerIdo *o,int release) {if(o) {o->dispatch=(void *)0x8c2645b4;finish_at(o);detach_at(o);embedded_at(o->embedded,-1);base_at(o,0);if((short)release>0) free_at(heap,o);}return o;}
