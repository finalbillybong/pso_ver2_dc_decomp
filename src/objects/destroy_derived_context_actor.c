#include "src/include/classes/TOTrapAncient01.h"
typedef char check_dispatch[(unsigned long)&((TOTrapAncient01 *)0)->dispatch==24?1:-1];
typedef char check_embedded[(unsigned long)&((TOTrapAncient01 *)0)->embedded==884?1:-1];
extern void finish_at(TOTrapAncient01 *),detach_at(TOTrapAncient01 *),embedded_at(void *,int),TOTrap_dtor_8c140b8c(TOTrapAncient01 *,int),free_at(void *,void *);extern void *heap;
TOTrapAncient01 *TOTrapAncient01_dtor_8c1414c4(TOTrapAncient01 *o,int release) {if(o) {o->dispatch=(void *)0x8c26ddc0;finish_at(o);detach_at(o);embedded_at(o->embedded,-1);TOTrap_dtor_8c140b8c(o,0);if((short)release>0) free_at(heap,o);}return o;}
