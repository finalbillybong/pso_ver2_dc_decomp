/* Checked provisional accessed prefix. */
typedef struct View { char unknown0[24]; void *dispatch; char unknown28[848]; void *resource; } View;
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_resource[(unsigned long)&((View *)0)->resource==876?1:-1];
typedef char check_prefix[sizeof(View)==880?1:-1];
View *destroy_effect_d870_8c178430(View *o,short flags) { if(o) { o->dispatch=(void *)0x8c270de0; if(o->resource)((void (*)(void *))0x8c0a7bb0)(o->resource); ((void (*)(void *,int))0x8c0436e0)(o,0); if(flags>0)((void (*)(void *,void *))0x8c122774)(*(void **)0x8c4d97e0,o); } return o; }
