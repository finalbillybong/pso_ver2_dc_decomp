#include "src/include/vector3.h"
#include "src/include/classes/TObjDFRecover.h"
typedef char check_dispatch[(unsigned long)&((TObjDFRecover *)0)->vtable==24?1:-1];
typedef char check_size[(unsigned long)&((TObjDFRecover *)0)->size==30?1:-1];
typedef char check_ticks[(unsigned long)&((TObjDFRecover *)0)->ticks==44?1:-1];
typedef char check_child[(unsigned long)&((TObjDFRecover *)0)->child==48?1:-1];
typedef char check_state[(unsigned long)&((TObjDFRecover *)0)->state==52?1:-1];
typedef char check_identifier[(unsigned long)&((TObjDFRecover *)0)->identifier==56?1:-1];
typedef char check_position[(unsigned long)&((TObjDFRecover *)0)->position==60?1:-1];
extern void TObject_ctor_8c0330e4(TObjDFRecover *,void *);extern void *object_name;
TObjDFRecover *TObjDFRecover_ctor_8c21b078(TObjDFRecover *o,void *parent,unsigned short identifier,const Vector3 *position) {TObject_ctor_8c0330e4(o,parent);o->vtable=(void *)0x8c278558;o->name=object_name;o->size=72;o->identifier=identifier;o->child=0;o->position=*position;o->state=0;o->ticks=5;return o;}
