/* Provisional object prefix and embedded member location. */
typedef struct View { char unknown0[24]; void *dispatch; char unknown28[1728]; char member; } View;
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_member[(unsigned long)&((View *)0)->member==1756?1:-1];
typedef char check_prefix[sizeof(View)==1760?1:-1];
View *destroy_multi_part_object(View *o,short flags) { if(o) { o->dispatch=(void *)0x8c261318;
 ((void (*)(void *))0x8c020440)(o);
 ((void (*)(void *))0x8c01fb70)(o);
 ((void (*)(void *))0x8c01fe20)(o);
 ((void (*)(void *))0x8c01ff58)(o);
 ((void (*)(void *))0x8c020094)(o);
 ((void (*)(void *))0x8c020134)(o);
 ((void (*)(void *))0x8c0201c4)(o);
 ((void (*)(void *))0x8c020290)(o);
 ((void (*)(void *))0x8c01fc90)(o);
 ((void (*)(void *))0x8c0206c0)(o);
 ((void (*)(void *))0x8c020d10)(o);
 ((void (*)(void *))0x8c020dac)(o);
 ((void (*)(void *))0x8c020e30)(o);
 ((void (*)(void *))0x8c0210fc)(o);
 ((void (*)(void *))0x8c0216c0)(o);
 ((void (*)(void *,int))0x8c2394a8)(&o->member,-1);
 ((void (*)(void *,int))0x8c0436e0)(o,0);
 if(flags>0) ((void (*)(void *,void *))0x8c122774)(*(void **)0x8c4d97e0,o);
 } return o; }
