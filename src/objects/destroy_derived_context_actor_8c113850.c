#include "src/include/classes/TLazerFenceSw.h"
typedef char check_dispatch[(unsigned long)&((TLazerFenceSw *)0)->dispatch==24?1:-1];
typedef char check_embedded[(unsigned long)&((TLazerFenceSw *)0)->embedded==292?1:-1];
extern void finish_at(TLazerFenceSw *),detach_at(TLazerFenceSw *),embedded_at(void *,int),TOKey_dtor_8c112efc(TLazerFenceSw *,int),free_at(void *,void *);extern void *heap;
TLazerFenceSw *TLazerFenceSw_dtor_8c113850(TLazerFenceSw *o,int release) {if(o) {o->dispatch=(void *)0x8c269cb4;finish_at(o);detach_at(o);embedded_at(o->embedded,-1);TOKey_dtor_8c112efc(o,0);if((short)release>0) free_at(heap,o);}return o;}
