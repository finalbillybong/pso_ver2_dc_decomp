typedef struct Object { char unknown0[24]; void *dispatch; char unknown28[76]; void *child; } Object;
typedef char check_layout[sizeof(Object)==108 && (unsigned long)&((Object *)0)->dispatch==24 && (unsigned long)&((Object *)0)->child==104 ? 1:-1];
#define child_at ((void *(*)(void *,short))0x8c192b28)
#define base_at ((Object *(*)(Object *,short))0x8c0db244)
#define free_at ((void (*)(void *,void *))0x8c122774)
Object *reconstruct_8c24e0f0(Object *o,short release) {if(o){o->dispatch=(void *)0x8c27e47c;child_at(o->child,1);base_at(o,0);if(release>0)free_at(*(void **)0x8c4d97e0,o);}return o;}
