typedef struct Child { char unknown0[4]; unsigned short flags; } Child;
typedef struct View { char unknown0[24]; void *dispatch; char unknown28[992]; Child *first,*second; char member; char unknown1029[59]; Child *optional_first,*optional_second; } View;
typedef char check_child_flags[(unsigned long)&((Child *)0)->flags==4?1:-1];
typedef char check_child_prefix[sizeof(Child)==6?1:-1];
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_first[(unsigned long)&((View *)0)->first==1020?1:-1];
typedef char check_second[(unsigned long)&((View *)0)->second==1024?1:-1];
typedef char check_member[(unsigned long)&((View *)0)->member==1028?1:-1];
typedef char check_optional_first[(unsigned long)&((View *)0)->optional_first==1088?1:-1];
typedef char check_optional_second[(unsigned long)&((View *)0)->optional_second==1092?1:-1];
typedef char check_prefix[sizeof(View)==1096?1:-1];
View *destroy_flagged_children(View *o,short flags) {
 if(o) {
  o->dispatch=(void *)0x8c2674dc;
  o->second->flags|=1; o->second=0;
  o->first->flags|=1; o->first=0;
  if(o->optional_first) { o->optional_first->flags|=1; o->optional_first=0; }
  if(o->optional_second) { o->optional_second->flags|=1; o->optional_second=0; }
  ((void (*)(void *))0x8c052124)(o);
  ((void (*)(void *,int))0x8c114790)(&o->member,-1);
  ((void (*)(void *,int))0x8c05bd84)(o,0);
  if(flags>0) ((void (*)(void *,void *))0x8c122774)(*(void **)0x8c4d97e0,o);
 }
 return o;
}
