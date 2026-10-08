/* Checked provisional accessed prefixes. */
typedef struct Link { char unknown0[4]; unsigned short flags; } Link;
typedef struct View { char unknown0[24]; void *dispatch; char unknown28[68]; Link *linked; } View;
typedef char check_flags[(unsigned long)&((Link *)0)->flags==4?1:-1];
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_linked[(unsigned long)&((View *)0)->linked==96?1:-1];
typedef char check_prefix[sizeof(View)==100?1:-1];
View *destroy_linked_8c0f00c0(View *o,short release) { if(o) { o->dispatch=(void *)0x8c268244; if(o->linked)o->linked->flags|=1; ((void (*)(View *,int))0x8c03311c)(o,0); if(release>0)((void (*)(void *,View *))0x8c122774)(*(void **)0x8c4d97e0,o); } return o; }
