typedef struct View {char unknown0[24];void *dispatch;char unknown28[4];void *resource;char unknown36[8];void *buffer;} View;
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_resource[(unsigned long)&((View *)0)->resource==32?1:-1];
typedef char check_buffer[(unsigned long)&((View *)0)->buffer==44?1:-1];
extern int ADXF_GetStat_8c34da3c(void *);extern void ADXF_Stop_8c34d79a(void *),close_at(void *),release_at(void *),cleanup_at(View *),TObject_dtor_8c03311c(View *,int),free_at(void *,void *);extern void *heap;
View *destroy_pair_context_effect(View *o,short release) {if(o) {o->dispatch=(void *)0x8c26dbd0;if(o->resource) {if(ADXF_GetStat_8c34da3c(o->resource)==2) ADXF_Stop_8c34d79a(o->resource);close_at(o->resource);o->resource=0;}if(o->buffer) {release_at(o->buffer);o->buffer=0;}cleanup_at(o);TObject_dtor_8c03311c(o,0);if(release>0) free_at(heap,o);}return o;}
