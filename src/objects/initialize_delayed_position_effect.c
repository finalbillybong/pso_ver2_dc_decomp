#include "src/include/vector3.h"
#include "src/include/classes/TObjDFBeamCursor.h"
typedef char check_dispatch[(unsigned long)&((TObjDFBeamCursor *)0)->dispatch==24?1:-1];
typedef char check_size[(unsigned long)&((TObjDFBeamCursor *)0)->size==30?1:-1];
typedef char check_ticks[(unsigned long)&((TObjDFBeamCursor *)0)->ticks==32?1:-1];
typedef char check_position[(unsigned long)&((TObjDFBeamCursor *)0)->position==36?1:-1];
extern void TObject_ctor_8c0330e4(TObjDFBeamCursor *,void *);extern void *object_name;
TObjDFBeamCursor *TObjDFBeamCursor_ctor_8c21b5a4(TObjDFBeamCursor *o,void *parent,const Vector3 *position) {TObject_ctor_8c0330e4(o,parent);o->dispatch=(void *)0x8c278520;o->name=object_name;o->size=48;o->ticks=32;o->position=*position;return o;}
