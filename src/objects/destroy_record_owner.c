typedef struct View {char unknown0[24];void *dispatch;char unknown28[20];void *base_resource;char unknown52[12];void *records24,*records16,*optional16;} View;
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_base_resource[(unsigned long)&((View *)0)->base_resource==48?1:-1];
typedef char check_records24[(unsigned long)&((View *)0)->records24==64?1:-1];
typedef char check_records16[(unsigned long)&((View *)0)->records16==68?1:-1];
typedef char check_optional16[(unsigned long)&((View *)0)->optional16==72?1:-1];
extern void release_at(void *),base_at(View *,int),free_at(void *,void *);extern void *heap;
View *destroy_record_owner(View *o,short release) {if(o) {o->dispatch=(void *)0x8c2662f8;if(o->records24) {release_at(o->records24);o->records24=0;}if(o->records16) {release_at(o->records16);o->records16=0;}if(o->optional16) {release_at(o->optional16);o->optional16=0;}if(o) {o->dispatch=(void *)0x8c266314;if(o->base_resource) {release_at(o->base_resource);o->base_resource=0;}base_at(o,0);}if(release>0) free_at(heap,o);}return o;}
