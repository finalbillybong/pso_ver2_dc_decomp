/* Checked provisional accessed prefix. */
typedef struct View { char unknown0[24]; void *dispatch; char unknown28[116]; void *resource; } View;
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_resource[(unsigned long)&((View *)0)->resource==144?1:-1];
typedef char check_prefix[sizeof(View)==148?1:-1];
View *destroy_effect_d870_8c11953c(View *o,short flags) { if(o) { o->dispatch=(void *)0x8c269f1c; if(o->resource)((void (*)(void *))0x8c18de08)(o->resource); ((void (*)(void *,int))0x8c11924c)(o,0); if(flags>0)((void (*)(void *,void *))0x8c122774)(*(void **)0x8c4d97e0,o); } return o; }
