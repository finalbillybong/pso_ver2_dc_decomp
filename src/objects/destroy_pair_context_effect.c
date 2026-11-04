#include "src/include/classes/TObjAfsLoad.h"
typedef char check_dispatch[(unsigned long)&((TObjAfsLoad *)0)->vtable==24?1:-1];
typedef char check_resource[(unsigned long)&((TObjAfsLoad *)0)->resource==32?1:-1];
typedef char check_buffer[(unsigned long)&((TObjAfsLoad *)0)->buffer==44?1:-1];
extern int ADXF_GetStat_8c34da3c(void *);extern void ADXF_Stop_8c34d79a(void *),close_at(void *),game_free_8c011ec0(void *),cleanup_at(TObjAfsLoad *),TObject_dtor_8c03311c(TObjAfsLoad *,int),free_at(void *,void *);extern void *heap;
TObjAfsLoad *TObjAfsLoad_dtor_8c1408e0(TObjAfsLoad *o,short release) {if(o) {o->vtable=(void *)0x8c26dbd0;if(o->resource) {if(ADXF_GetStat_8c34da3c(o->resource)==2) ADXF_Stop_8c34d79a(o->resource);close_at(o->resource);o->resource=0;}if(o->buffer) {game_free_8c011ec0(o->buffer);o->buffer=0;}cleanup_at(o);TObject_dtor_8c03311c(o,0);if(release>0) free_at(heap,o);}return o;}
