typedef struct Object { char unknown0[24]; void *dispatch; char unknown28[4]; void *entries; } Object;
typedef char check_layout[sizeof(Object)==36 && (unsigned long)&((Object *)0)->dispatch==24 && (unsigned long)&((Object *)0)->entries==32 ? 1:-1];
#define release_at ((void (*)(void *))0x8c011ed8)
#define base_at ((Object *(*)(Object *,int))0x8c03311c)
#define free_at ((void (*)(void *,void *))0x8c122774)
Object *reconstruct_8c103c94(Object *o,short release) {if(o){o->dispatch=(void *)0x8c269748;release_at(o->entries);o->entries=0;base_at(o,0);if(release>0)free_at(*(void **)0x8c4d97e0,o);}return o;}
