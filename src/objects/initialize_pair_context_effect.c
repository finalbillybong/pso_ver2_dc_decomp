#include "src/include/classes/TObjAfsLoad.h"
typedef char check_dispatch[(unsigned long)&((TObjAfsLoad *)0)->vtable==24?1:-1];
typedef char check_size[(unsigned long)&((TObjAfsLoad *)0)->size==30?1:-1];
typedef char check_state[(unsigned long)&((TObjAfsLoad *)0)->resource==32?1:-1];
typedef char check_first[(unsigned long)&((TObjAfsLoad *)0)->first==36?1:-1];
typedef char check_second[(unsigned long)&((TObjAfsLoad *)0)->second==40?1:-1];
typedef char check_field44[(unsigned long)&((TObjAfsLoad *)0)->buffer==44?1:-1];
typedef char check_field48[(unsigned long)&((TObjAfsLoad *)0)->state==48?1:-1];
typedef char check_field52[(unsigned long)&((TObjAfsLoad *)0)->owned==52?1:-1];
typedef char check_ticks[(unsigned long)&((TObjAfsLoad *)0)->ticks==56?1:-1];
extern void TObject_ctor_8c0330e4(TObjAfsLoad *,void *);extern void *object_name;
TObjAfsLoad *TObjAfsLoad_ctor_8c140890(TObjAfsLoad *o,void *parent,unsigned int first,unsigned int second) {TObject_ctor_8c0330e4(o,parent);o->vtable=(void *)0x8c26dbd0;o->name=object_name;o->size=60;o->resource=0;o->first=first;o->second=second;o->buffer=0;o->state=0;o->owned=0;o->ticks=900;return o;}
